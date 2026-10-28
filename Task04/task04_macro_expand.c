#define SQUARE(x) ((x) * (x))
#define BAD_SQUARE(x) x * x
int f(int a) { return SQUARE(a + 1) + BAD_SQUARE(a + 1); }
