#include <stdio.h> 

int main() {
    int count=0, c;
    int inword=0; 

    while((c=getchar()) != EOF) {
        if (c==' ' || c=='\n' || c=='\t') {
            if (inword) {
                inword=0;
                ++count;
            }
        } else {
            inword=1;
        }
    }
    printf("words number: %d\n", count);
    return 0;
}