#include <stdio.h>

#define ISSPACE 1
#define NOTSPACE 0

// int main() {
//     int c, flag=NOTSPACE;
//     while ((c=getchar()) != EOF) {
//         if (c!= ' ') {
//             putchar(c);
//             flag = NOTSPACE;
//         } else if (flag == NOTSPACE) {
//             putchar(c);
//             flag = ISSPACE;
//         }
//     }
// }

int main() {
    int c, isspace=NOTSPACE;
    while((c=getchar()) != EOF) {
        if (c != ' ') {
            if (c == '\b') putchar('\\b');
            else if (c == '\t') putchar('\\t');
            else if (c == '\n') putchar('\\n');
            else putchar(c);
            isspace = NOTSPACE;
        } else if (isspace == NOTSPACE) {
            putchar(c);
            isspace = ISSPACE;
        }
    }
    return 0;
}