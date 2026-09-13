#include <stdio.h>

int main() {
    int x; 
    int p, n;
    printf("Enter an integer (x): ");
    scanf("%d", &x);
    printf("Enter the position (p): ");
    scanf("%d", &p);
    printf("Enter the number of bits to reverse (n): ");
    scanf("%d", &n);
    printf("Reversing %d bits of x at position %d.\n", n, p);
    x = x ^ (~(~0 << n) << (p + 1 - n));
    printf("New value of x after reversing bits: %d\n", x);
    return 0;
}