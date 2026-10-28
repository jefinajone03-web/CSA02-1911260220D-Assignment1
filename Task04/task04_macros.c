#include <stdio.h>
#define RUPEES_TO_PAISE(r) ((r) * 100L)
#define MAX(a, b)          (((a) > (b)) ? (a) : (b))
#define SQUARE(x)          ((x) * (x))
#define BAD_SQUARE(x)      x * x
static inline int square_fn(int x) { return x * x; }
static inline int max_fn(int x, int y) { return x > y ? x : y; }
int main(void) {
    int a = 4;
    printf("RUPEES_TO_PAISE(50)         = %ld\n", RUPEES_TO_PAISE(50));
    printf("RUPEES_TO_PAISE(1+1)        = %ld (correct: 200)\n", RUPEES_TO_PAISE(1 + 1));
    printf("MAX(120, 75)                = %d\n", MAX(120, 75));
    printf("SQUARE(a+1) safe            = %d (correct: 25)\n", SQUARE(a + 1));
    printf("BAD_SQUARE(a+1)             = %d (WRONG: expands to a+1*a+1 = 9)\n", BAD_SQUARE(a + 1));
    printf("square_fn(a+1) = %d\n", square_fn(a + 1));
    int i = 7, j = 3;
    int m = MAX(i++, j);
    printf("MAX(i++, j): result = %d, i = %d (i++ ran twice: result 8, i 9)\n", m, i);
    i = 7; m = max_fn(i++, j);
    printf("max_fn(i++, j): result = %d, i = %d (runs once)\n", m, i);
    return 0;
}
