#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

#define HASHSIZE 101


struct nlist {
    struct nlist *next;
    char *name;
    char *defn;
};

struct nlist *hashtab[HASHSIZE];

unsigned hash(char *s){
    unsigned int hashval;
    for (hashval=0; *s != '\0'; s++){
        hashval = *s + 31 * hashval;
    }
    return hashval % HASHSIZE;
}

struct nlist *lookup(char *s){
    struct nlist *np;
    for (np=hashtab[hash(s)]; np != NULL; np=np->next){
        if (strcmp(s, np->name) == 0){
            return np;
        }
    }
    return NULL;
}

struct nlist *install(char *name, char *defn){
    struct nlist *np;
    unsigned hashval;

    if ((np=lookup(name)) == NULL){
        np = (struct nlist *) malloc(sizeof(*np));
        if (np == NULL || (np->name = strdup(name)) == NULL){
            return NULL;
        }
        hashval = hash(name);
        np->next = hashtab[hashval];
        hashtab[hashval] = np;
    } else{
        free((void *) np->defn);
    }
    if ((np->defn = strdup(defn)) == NULL){
        return NULL;
    }
    return np;
}

void undef(char *name){
    struct nlist *np, *prev;
    unsigned hashval = hash(name);
    if ((np=lookup(name))!=NULL){
        if (hashtab[hashval] == np){
            hashtab[hashval] = np->next;
        } else{
            for (prev=hashtab[hashval]; prev->next != NULL; prev=prev->next){
                if (prev->next == np){
                    prev->next = np->next;
                    break;
                }
            }
        }
        free((void *) np->name);
        free((void *) np->defn);
        free((void *) np); 
    }
}

int main(){

}