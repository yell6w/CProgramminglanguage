#include <stdio.h>

int main() {
    int x, n;
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &n);
    x = (x << n) | (x >> (sizeof(int) * 8 - n));
    printf("New value of x after rotating bits: %d\n", x);
    return 0;
}