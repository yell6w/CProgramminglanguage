#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    printf("The maximum value of char: %d \n", CHAR_MAX);
    printf("The minimum value of char: %d \n", CHAR_MIN);
    printf("The maximum value of unsigned char: %u \n", UCHAR_MAX);
    printf("The maximum value of short: %d \n", SHRT_MAX);
    printf("The minimum value of short: %d \n", SHRT_MIN);
    printf("The maximum value of unsigned short: %u \n", USHRT_MAX);
    printf("The maximum value of int: %d \n", INT_MAX);
    printf("The minimum value of int: %d \n", INT_MIN);
    printf("The maximum value of unsigned int: %u \n", UINT_MAX);
    printf("The maximum value of long: %ld \n", LONG_MAX);
    printf("The minimum value of long: %ld \n", LONG_MIN);
    printf("The maximum value of unsigned long: %lu \n", ULONG_MAX);
    printf("The maximum value of unsigned long long: %llu \n", ULLONG_MAX);
    printf("The maximum value of long long: %lld \n", LLONG_MAX);
    printf("The minimum value of long long: %lld \n", LLONG_MIN);
    printf("The maximum value of float: %f \n", FLT_MAX);
    printf("The minimum value of float: %f \n", FLT_MIN);
    printf("The maximum value of double: %lf \n", DBL_MAX);
    printf("The minimum value of double: %lf \n", DBL_MIN);
    printf("The maximum value of long double: %Lf \n", LDBL_MAX);
    printf("The minimum value of long double: %Lf \n", LDBL_MIN);
    return 0;
}