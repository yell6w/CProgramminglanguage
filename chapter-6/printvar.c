#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "utils.h"

#define MAXWORD 100 
#define cat(a,b) a ## b


struct tnode{
    char *prefix;
    char *varnames[MAXWORD];
    int count;
    struct tnode *left;
    struct tnode *right;
};

enum {NO, YES};

struct tnode *addtree(struct tnode *, char *, int); 
void treeprint(struct tnode *);

int main(int argc, char *argv[]){
    struct tnode *root;
    char word[MAXWORD];
    int c;
    int flag = NO, PREFIX=4;
    
    // 处理命令行参数
    for(; --argc>0;){
        if ((*++argv)[0] == '-'){
            while(c=*++argv[0]){
                switch(c){
                    case 's':
                        flag = YES;
                        break;
                    default:
                        printf("Unknown option: %c\n", c);
                        break;
                }
            }
        } else{
            printf("Unknown argument: %s\n", *argv);
        }
    }

    // 处理参数
    if (flag == YES){
        PREFIX = 6;
        printf("Prefix mode enabled, prefix length: %d\n", PREFIX);
    }

    // 读取代码中的变量
    root = NULL;

    while ((c=getword(word, MAXWORD)) != EOF){
        // printf("getword return: %d, word: [%s]\n", c, word);
        if (isalpha(word[0])){
            root = addtree(root, word, PREFIX);
        }
    }
    treeprint(root);

}

struct tnode *talloc(void);
char *startup(char *, int);

char *mystrdup(char *s){
    char *p = malloc(strlen(s) + 1);   // 1. 申请一块新内存
    if (p != NULL) strcpy(p, s);       // 2. 把 s 的内容整个复制过去
    return p;                          // 3. 返回新内存的地址
}

struct tnode *addtree(struct tnode *p, char *word, int prefix){
    int cond;

    char word_prefix[MAXWORD];
    strncpy(word_prefix, word, prefix);
    word_prefix[prefix] = '\0';

    if (p==NULL){
        p = talloc();
        p->prefix = startup(word, prefix);
        (p->varnames)[0] = mystrdup(word);
        p->count = 1;
        p->left = p->right = NULL;
    } else if((cond=strcmp(word_prefix, p->prefix))==0){
        p->varnames[p->count] = mystrdup(word);
        p->count += 1;
    } else if(cond<0){
        p->left = addtree(p->left, word, prefix);
    } else{
        p->right = addtree(p->right, word, prefix);
    }
    return p;
}

void treeprint(struct tnode *p){
    if (p != NULL){
        treeprint(p->left);
        printf("%s -> %d\n", p->prefix, p->count);
        for(int i=0; --p->count>0; i++){
            printf("  %s\n", p->varnames[i]);
        }
        treeprint(p->right);
    }
}

struct tnode *talloc(void){
    return (struct tnode *) malloc(sizeof(struct tnode));
}

char *startup(char *s, int prefix){
    char *p;
    p = (char *) malloc(prefix+1);
    if (p!=NULL) {
        strncpy(p, s, prefix);
        p[prefix] = '\0';
    }
    return p;
}