#include <stdio.h>
#include <limits.h>
#include <ctype.h>

#define MAXLINE 1000

int my_getline(char *line, int maxline){
    int c;
    int i=0;
    while ((c=getchar()) != EOF && c != '\n'){
        if (i < maxline - 1){
            *line++ = c;
            i++;    
        }    
    }
    
    if (i==0 || c==EOF) return 0;

    *line = '\0';
    return i;
}


int main(){
    char c;
    char line[MAXLINE]; 
    int result=0, len=0, i=0;
    while((len=my_getline(line, MAXLINE)) > 0){
        for (int j= 0; j < len; j++){
            c = line[j];
            if (c == '0' && (line[j+1] == 'x' || line[j+1] == 'X')){
                continue;
            }
            if (isxdigit(c)){
                if (c >= '0' && c <= '9'){
                    result = result * 16 + (c - '0');
                }
                else if (c >= 'a' && c <= 'f'){
                    result = result * 16 + (c - 'a' + 10);
                }
                else if (c >= 'A' && c <= 'F'){
                    result = result * 16 + (c - 'A' + 10);
                }
            }
            else{
                printf("Invalid hexadecimal digit: %c \n", c);
                return 1;
            }
        }
        printf("Hexadecimal: %s, Decimal: %d \n", line, result);
        result = 0;
    }
}