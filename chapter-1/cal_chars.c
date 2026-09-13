/*
used for calulating the number of characters in a file
*/

#include <stdio.h>

// int main() {
//     long nc;
//     nc = 0;
//     while (getchar() != EOF)
//         ++nc;
//     printf("%ld\n", nc);
//     return 0;
// }

// int main() {
//     long nc;
//     nc = 0;
//     for (nc=0; getchar() != EOF; ++nc);
//     printf("characters number: %ld\n", nc);
//     return 0;
// }

int main() {
    long int ns=0, nt=0, nl=0;
    int c;
    while((c=getchar())!=EOF){
        switch (c) {
            case ' ':
                ++ns;
                break;
            case '\t':
                ++nt;
                break;
            case '\n':
                ++nl;
                break;
        }
    }
    printf("spaces: %ld, tabs: %ld, newlines: %ld\n", ns, nt, nl);
    return 0;
}