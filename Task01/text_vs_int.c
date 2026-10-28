#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

static int cmp_text(const char *a, const char *b) {
    while (*a == '0' && a[1]) a++;
    while (*b == '0' && b[1]) b++;
    size_t la = strlen(a), lb = strlen(b);
    if (la != lb) return la < lb ? -1 : 1;
    return strcmp(a, b);
}

int main(void) {
    const char *p = "01530", *c = "01980";
    printf("text compare(%s, %s) = %d\n", p, c, cmp_text(p, c));
    printf("text size per reading : %zu bytes (d=5 digits + NUL)\n", strlen(p) + 1);
    printf("int size per reading : %zu bytes (unsigned short)\n", sizeof(unsigned short));
    enum { N = 800000 };
    static char txt[N][8];
    static unsigned short num[N];
    for (int i = 0; i < N; i++) {
        num[i] = (unsigned short)(i * 7);
        snprintf(txt[i], 8, "%05u", (unsigned)num[i]);
    }
    clock_t t0 = clock(); long s1 = 0;
    for (int r = 0; r < 20; r++) for (int i = 1; i < N; i++) s1 += cmp_text(txt[i-1], txt[i]);
    double t_text = (double)(clock() - t0) / CLOCKS_PER_SEC;
    t0 = clock(); long s2 = 0;
    for (int r = 0; r < 20; r++) for (int i = 1; i < N; i++) s2 += (num[i-1] > num[i]) - (num[i-1] < num[i]);
    double t_int = (double)(clock() - t0) / CLOCKS_PER_SEC;
    printf("compare 800000 readings x20 : text = %.3f s, int = %.3f s (checks %ld %ld)\n", t_text, t_int, s1, s2);
    printf("memory for 800000 readings : text = %zu bytes, int = %zu bytes\n", sizeof(txt), sizeof(num));
    return 0;
}
