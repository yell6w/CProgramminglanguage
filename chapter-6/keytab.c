#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "utils.h"

#define MXLWORD 100

struct key {
    char *word;
    int count;
} keytab[] = {
    "auto", 0, 
    "break", 0,
    "case", 0,
    "char", 0,
    "const", 0,
    "continue", 0,
    "default", 0,
    "unsigned", 0,
    "void", 0,
    "volatile", 0,
    "while", 0
};

int getword(char *, int);
int binsearch(char *, struct key *, int);

int main(int argc, char *argv[]) {
    int n; 
    char c;
    char word[MXLWORD];

    printf("isalpha: %d %d %d %d\n", isalpha('/'), isalnum('/'), isalpha('*'), isalnum('*'));

    if(isalnum('*')){
        printf("* is alnum\n");
    }

    if(isalpha('*')){
        printf("* is alpha\n");
    }

    while ((c=getword(word, MXLWORD)) != EOF) {
        if (c== '#' || c== '"' || c== '\'' || c== '/') continue;
        printf("word: %s\n", word);
        if (isalpha(word[0])) {
            if ((n = binsearch(word, keytab, sizeof(keytab)/sizeof(struct key))) >= 0) {
                keytab[n].count++;
            }
        }
    }
    for (n=0; n<sizeof(keytab)/sizeof(keytab[0]); n++) {
        if (keytab[n].count > 0) {
            printf("%4d %s\n", keytab[n].count, keytab[n].word);
        }
        // printf("%4d %s\n", keytab[n].count, keytab[n].word);
    }
    return 0;
}

int binsearch(char *word, struct key tab[], int n) {
    int cond;
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if ((cond = strcmp(word, tab[mid].word)) < 0) {
            high = mid - 1;
        } else if (cond > 0) {
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}