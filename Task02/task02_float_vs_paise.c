#include <stdio.h>
int main(void) {
    float total_f = 0.0f;
    double total_d = 0.0;
    long total_p = 0;
    for (int i = 0; i < 4000; i++) { total_f += 0.10f; total_d += 0.10; total_p += 10; }
    printf("4000 bills of Rs 0.10 each, exact answer = Rs 400.00\n");
    printf("float total : %.6f\n", total_f);
    printf("double total : %.10f\n", total_d);
    printf("long paise    : Rs %ld.%02ld\n", total_p / 100, total_p % 100);
    float big_f = 0.0f; long big_p = 0;
    for (int i = 0; i < 800000; i++) { big_f += 162.50f; big_p += 16250; }
    printf("\n800000 bills of Rs 162.50, exact = Rs 130000000.00\n");
    printf("float total : %.2f\n", big_f);
    printf("long paise    : Rs %ld.%02ld\n", big_p / 100, big_p % 100);
    unsigned short prev = 65400, cur = 120;
    int wrong = cur - prev;
    printf("\nint subtraction without cast: %d (negative bill!)\n", wrong);
    printf("unsigned short arithmetic   : %u\n", (unsigned short)(cur - prev));
    return 0;
}
