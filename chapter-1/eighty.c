#include <stdio.h>

#define MAXLINE 1000
#define PRINT 80

int my_getline(char *line, int maxline);

int copy(char from[], char to[]){
    while((*to++ = *from++) != '\0') 
        ;
}

int main(){
    int len, max=0;
    char line[MAXLINE], longest[MAXLINE]={0};
    while((len=my_getline(line, MAXLINE))>0){
        if (len>PRINT){
            printf("Line is over 80 characters: %s %d \n", line, len);
        }
        if (len>max){
            max = len;
            copy(line, longest);
        }
    }
    printf("Longest line: %s %d \n", longest, max);
    return 0;
}

int my_getline(char *line, int maxline){
    int c, i=0, j=0;
    for(i=0; (c=getchar()) != EOF; ++i){
        if (i<=maxline-2){
            line[j++] = c;
        }
        if (c=='\n'){
            i++;
            line[j++] = c;
            break;
        }
    }

    line[j] = '\0';

    if (c == EOF && i == 0) {
        return 0;
    }

    return i;
}