#include <stdio.h>

#define MAXLINE 1000
#define TABINC 8

int my_getline(char *line, int maxline); 

void replace_space(char *line){
    char new_line[MAXLINE];
    int ispace=0;
    int nt, ns;
    int i=0, j=0, count=0;
    for (i=0; line[i] != '\0'; i++){
        if (line[i] != ' '){
            new_line[j++] = line[i];
            if (ispace==1){
                nt = count / TABINC;
                ns = count % TABINC;
                for (int k=0; k<nt; k++){
                    new_line[j++] = '\t';
                }
                if (line[i] == '\t') {
                    new_line[j++] = '\t';
                } else {
                    for (int k=0; k<ns; k++){
                        new_line[j++] = ' ';
                    }
                }
                count=0;
                ispace=0;
            }
        }
        else{
            count++;
            ispace=1;
        }
    }
    new_line[j] = '\0';
    printf("Line after replacing spaces with tabs: %s \n", new_line);
}

int main() {
    int len;
    char line[MAXLINE];
    while((len=my_getline(line, MAXLINE))>0){
        replace_space(line);
    }
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