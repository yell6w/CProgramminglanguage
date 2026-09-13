#include <stdio.h> 

#define MAXCOL 10
#define TABINC 8

int main() {
    char c;
    int pos=0, ns=0, nt=0, nc=0;
    while ((c=getchar()) != EOF) {

        if (pos==MAXCOL) {
            putchar('\n');
            pos = ns = nt = nc= 0;
        } else {
            if (c=='\n') {
                if (nc>0){
                    putchar('\n');
                } 
                pos = ns = nt = nc = 0;
            } else if (c=='\t') {
                if (nc>0){
                    nt += 1;
                    pos = pos + (TABINC - pos % TABINC) - ns;
                    ns = 0;
                }
            } else if (c==' ') {
                if (nc>0){
                    ns += 1;
                    if (ns == TABINC) {
                        nt += 1;
                        ns = 0;
                    }
                    pos++;
                }
            } else {
                for (int i=0; i<nt; i++){
                    putchar('\t');
                }
                for (int i=0; i<ns; i++){
                    putchar(' ');
                }
                putchar(c);
                pos++;
                nc++;
                nt = ns = 0;
            }
        }    
    }
}

// int main() {
//     char c;
//     int pos = 0; 
//     while ((c=getchar()) != EOF) {
//         if (c=='\n') {
//             putchar(c);
//             pos = 0; 
//         } else if (pos<MAXCOL) {
//             if (c=='\t') {
//                 pos = pos + (8 - pos % 8);
//                 if (pos>MAXCOL) {
//                     pos = MAXCOL;
//                 } else {
//                     putchar(c);
//                 }
//             } else {
//                 pos++;
//             }
//         } else if (pos>=MAXCOL) {
//             putchar('\n');
//             putchar(c);
//             pos = 0;
//         }
//     }
//     return 0;
// }