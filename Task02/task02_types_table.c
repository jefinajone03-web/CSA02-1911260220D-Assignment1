#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void) {
    printf("%-20s %5s %s\n", "type", "bytes", "range");
    printf("%-20s %5zu %d .. %d\n", "char", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("%-20s %5zu %d .. %d\n", "short", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("%-20s %5zu 0 .. %u\n", "unsigned short", sizeof(unsigned short), (unsigned)USHRT_MAX);
    printf("%-20s %5zu %d .. %d\n", "int", sizeof(int), INT_MIN, INT_MAX);
    printf("%-20s %5zu 0 .. %u\n", "unsigned int", sizeof(unsigned), UINT_MAX);
    printf("%-20s %5zu %ld .. %ld\n", "long", sizeof(long), LONG_MIN, LONG_MAX);
    printf("%-20s %5zu %lld .. %lld\n", "long long", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("%-20s %5zu %.6e .. %.6e (%d digits)\n", "float", sizeof(float), (double)FLT_MIN, (double)FLT_MAX, FLT_DIG);
    printf("%-20s %5zu %.6e .. %.6e (%d digits)\n", "double", sizeof(double), DBL_MIN, DBL_MAX, DBL_DIG);
    return 0;
}
