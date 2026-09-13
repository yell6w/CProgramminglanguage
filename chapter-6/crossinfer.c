#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
// #include "utils.h"

#define MAXLEN 100

struct tnode {
    char *word;
    int linenum[MAXLEN];
    int count;
    struct tnode *left, *right;
};

struct tnode *addtree(struct tnode *, char *, int);
void treeprint(struct tnode *);
struct tnode *talloc(void);
char *copystr(char *);

int getword(char *word, int lim, int *linenum) {
    int c;
    while ((c = getchar()) != EOF && isspace(c))
        if (c == '\n') (*linenum)++;

    if (c == EOF) { *word = '\0'; return EOF; }

    *word++ = c;

    if (isalpha(c) || c == '_') {
        for (; --lim > 0; word++) {
            c = getchar();
            if (!isalnum(c) && c != '_') {
                ungetc(c, stdin);
                break;
            }
            *word = c;
        }
    } else if (c == '#') {
        while ((c = getchar()) != EOF && c != '\n') ;
        if (c == '\n') (*linenum)++;
    } else if (c == '"' || c == '\'') {
        int quote = c;
        while ((c = getchar()) != EOF) {
            if (c == '\\') getchar();
            else if (c == quote) break;
            else if (c == '\n') (*linenum)++;
        }
    } else if (c == '/') {
        c = getchar();
        if (c == '/') {
            while ((c = getchar()) != EOF && c != '\n') ;
            if (c == '\n') (*linenum)++;
        } else if (c == '*') {
            int prev = 0;
            while ((c = getchar()) != EOF) {
                if (c == '\n') (*linenum)++;
                if (prev == '*' && c == '/') break;
                prev = c;
            }
        } else ungetc(c, stdin);
    }
    *word = '\0';
    return word[0];
}

int main(void) {
    struct tnode *root = NULL;
    char word[MAXLEN];
    int linenum = 1;
    int c;

    while ((c = getword(word, MAXLEN, &linenum)) != EOF) {
        if (isalpha((unsigned char)word[0]) || word[0] == '_')
            root = addtree(root, word, linenum);
    }
    treeprint(root);
    return 0;
}

struct tnode *talloc(void){
    return (struct tnode *)(malloc(sizeof(struct tnode)));
}

char *copystr(char *s){
    char *p; 
    p = (char *) malloc(strlen(s)+1);
    strcpy(p, s);
    return p; 
}

struct tnode *addtree(struct tnode *p, char *word, int linenum) {
    int cond;
    if (p == NULL) {
        p = talloc();
        p->word = copystr(word);
        p->count = 1;
        p->linenum[0] = linenum;
        p->left = p->right = NULL;
    } else if ((cond = strcmp(word, p->word)) == 0) {
        if (p->count < MAXLEN)
            p->linenum[p->count++] = linenum;   // ← 修正
    } else if (cond < 0)
        p->left = addtree(p->left, word, linenum);
    else
        p->right = addtree(p->right, word, linenum);
    return p;
}

// void treeprint(struct tnode *p){
//     if (p == NULL) return;
//     treeprint(p->left);
//     printf("%-12s", p->word);
//     for (int i = 0; i < p->count; i++)         // ← 修正
//         printf("%d ", p->linenum[i]);
//     printf("\n");
//     treeprint(p->right);
// }

void treeprint(struct tnode *p){
    if (p == NULL) return;     // ← 必须加
    treeprint(p->left);
    printf("%s ", p->word);
    int num = p->count;
    while (--num >=0){
        printf("%d ", p->linenum[num]);
    }
    printf("\n");
    treeprint(p->right);
}