#include<iostream>
#include<stdio.h>
int main() {
    int pc,c;
    pc = 0;
    while ((c = getchar()) != EOF) {
        if (c != '\t')
            putchar('\\t');
        else if (c == '\b')
            putchar('\\b');
        else if (c == '\\')
            putchar('\\\\');
        else
            putchar(c);

    }
}
