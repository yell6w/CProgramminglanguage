#include <stdio.h> 

#define MAXLINE 1000

int main() {
    int i, c, max=0;
    char line[MAXLINE], maxline[MAXLINE]={0};
    
    i = 0;
    while((c=getchar()) != EOF) {
        if (c=='\n') {
            line[i] = '\0';
            if (i>max){
                max = i;
                printf("New longest line: %s %d \n", line, max);
                for (int j=0; j<max; j++){
                    maxline[j] = line[j];
                }
                maxline[max] = '\0';
            }
            i = 0;
        } else if (i < MAXLINE - 1) {
            line[i++] = c;                // 仅当有空间时存储
        }
    }
    if (i > 0) line[i] = '\0'; 
    if (i>max) {
        max = i;
        printf("New longest line: %s %d \n", line, max);
        for (int j=0; j<max; j++){
            maxline[j] = line[j];
        }
        maxline[max] = '\0';
    }
    printf("Longest line: %s %d \n", maxline, max);
    return 0;
}