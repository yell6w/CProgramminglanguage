#include <stdio.h>

int main() {
    int x, p, n, y;
    int mask;
    int x_bits_num, y_bits_num;
    printf("Enter an integer (x): ");
    scanf("%d", &x);
    printf("Enter the position (p): ");
    scanf("%d", &p);
    printf("Enter the number of bits to set (n): ");
    scanf("%d", &n);
    printf("Enter the value to set (y): ");
    scanf("%d", &y);

    x_bits_num = sizeof(x) * 8; // Calculate the number of bits in x
    if (p < 0 || p >= x_bits_num) {
        printf("Error: Position p is out of range. It should be between 0 and %d.\n", x_bits_num - 1);
        return 1;
    }

    y_bits_num = sizeof(y) * 8; // Calculate the number of bits in y
    if (n < 0 || n > y_bits_num) {
        printf("Error: Number of bits n is out of range. It should be between 0 and %d.\n", y_bits_num);
        return 1;
    }

    if (p<n) {
        printf("Error: Position p is less than the number of bits n. Cannot set bits.\n");
        return 1;
    }

    printf("Original value of x: %d\n", x);
    printf("Original value of y: %d\n", y);
    printf("Setting %d bits of y at position %d in x.\n", n, p);
    // mask = (~(~0 <<(p+1-n))) | (~0 << (p+1)); 
    // y = (y << (p+1-n)) & (~mask);
    // x = x & mask;
    // x = x | y;
    // printf("New value of x after setting bits: %d\n", x);

    x = x & (~(~(~0 << n) << (p + 1 - n))); // Clear the n bits at position p in x
    y = (y & (~(~0 << n))) << (p + 1 - n); // Extract the n bits from y and shift them to position p
    x = x | y; // Set the n bits in x with the extracted bits from
    printf("New value of x after setting bits: %d\n", x);
    return 0;
}