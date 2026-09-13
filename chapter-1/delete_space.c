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
        while (len>MAXLINE-1){len--;}
        while(len>=1){
            if (line[len-1]==' ' || line[len-1]=='\t' || line[len-1]=='\n')
                    len--;
            else {break;}
        }
        if (len>0){
            line[len] = '\n';
            line[len+1] = '\0';
            printf("Line after removing trailing spaces: %s %d \n", line, len);
        }
    }
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