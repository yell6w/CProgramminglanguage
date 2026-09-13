#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "utils.h"

#define MAXWORD 100 
#define cat(a,b) a ## b

struct tnode{
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
};

struct tnode *addtree(struct tnode *, char *); 
void treeprint(struct tnode *);
void treecollect(struct tnode *, struct tnode *[]);

int main(){
    struct tnode *root, *node_list[MAXWORD];
    char word[MAXWORD];
    int c;

    root = NULL;

    // root = addtree(root, "test");
    // treeprint(root);

    while ((c=getword(word, MAXWORD)) != EOF){
        // printf("getword return: %d, word: [%s]\n", c, word);
        if (isalpha(word[0])){
            root = addtree(root, word);
        }
    }
    treeprint(root);
    treecollect(root, node_list);
    for (int i=0; i<MAXWORD; i++){
        for (int j=i+1; j<MAXWORD; j++){
            if (node_list[i]->count < node_list[j]->count){
                struct tnode *tmp = node_list[i];
                node_list[i] = node_list[j];
                node_list[j] = tmp;
            }
        }
    }
    for (int i=0; i<MAXWORD; i++){
        if (node_list[i] != NULL){
            printf("%s -> %d\n", node_list[i]->word, node_list[i]->count);
        }
    }
    return 0;
}

struct tnode *talloc(void);
char *startup(char *);

struct tnode *addtree(struct tnode *p, char *word){
    int cond;
    if (p==NULL){
        p = talloc();
        p->word = startup(word);
        p->count = 1;
        p->left = p->right = NULL;
    } else if((cond=strcmp(word, p->word))==0){
        p->count += 1;
    } else if(cond<0){
        p->left = addtree(p->left, word);
    } else{
        p->right = addtree(p->right, word);
    }
    return p;
}

void treeprint(struct tnode *p){
    if (p != NULL){
        treeprint(p->left);
        printf("%s -> %d\n", p->word, p->count);
        treeprint(p->right);
    }
}

void treecollect(struct tnode *p, struct tnode *arr[]){
    if (p != NULL){
        treecollect(p->left, arr);
        *arr++ = p;
        treecollect(p->right, arr);
    }
}

struct tnode *talloc(void){
    return (struct tnode *) malloc(sizeof(struct tnode));
}

char *startup(char *s){
    char *p;
    p = (char *) malloc(strlen(s)+1);
    if (p!=NULL) strcpy(p, s);
    return p;
}

