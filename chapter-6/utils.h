#include <stdio.h>
#include <ctype.h>
#include <string.h>

// int getword(char *word, int lim){
//     char c; 
//     char *w = word;
//     while (isspace(c = getchar())) {;}
//     if (c != EOF) {
//         *word++ = c;
//     }
//     if (!isalpha(c)) {
//         *word = '\0';
//         return c;
//     }
//     for (; --lim>0; word++){
//         if (!isalnum(*word = getchar())) {
//             ungetc(*word, stdin);
//             break;
//         }
//     }
//     *word = '\0';
//     return w[0];
// }

/*
这个函数好玩,把很多不想要的字符读取成了了单个字符,核心原因在前面的判断部分
*/
// int getword(char *word, int lim){
//     char c; 
//     char *w = word;
//     while (isspace(c = getchar())) {;}
//     if (c != EOF) {
//         *word++ = c;
//     }
//     if (!isalpha(c) && c!='_') {
//         *word = '\0';
//         return c;
//     }

//     // 处理引号、注释和预处理指令--跳过
//     if (c=='"'){
//         // 处理字符串字面量
//         while ((c=getchar()) != '"' && c != EOF) {;}
//     } else if(c=='\''){
//         // 处理字符字面量
//         while ((c=getchar()) != '\'' && c != EOF) {;}
//     }
//     else if (c=='/'){ 
//         // 处理注释
//         if ((c=getchar()) == '*') { // 多行注释
//             while ((c=getchar()) != EOF) {
//                 if (c=='*' && (c=getchar()) == '/') {
//                     break;
//                 }
//             }
//         } else if (c=='/') { // 单行注释
//             while ((c=getchar()) != '\n' && c != EOF) {
//                 ;
//             }
//         } else {
//             ungetc(c, stdin);
//         }
//     } else if (c=='#'){ 
//         // 处理预处理指令
//         while ((c=getchar()) != '\n' && c != EOF) {
//             ;
//         }
//     }

//     for (; --lim>0; word++){
//        c= getchar();
//        if (c==EOF){
//             break;
//        }
//         if (c=='"' || c=='\'' || c=='/' || c=='#') {
//             ungetc(c, stdin);
//             break;
//         }
//         if (!isalnum(c) && c!='_') {
//             ungetc(c, stdin);
//             break;
//         }
//         *word = c;
//     }
//     *word = '\0';
//     return w[0];
// }

// 要注意isalpha的问题
// int getword(char *word, int lim){
//     char c, skip, *w=word;
//     // 跳过空白字符
//     while(isspace(c=getchar())) {;}
//     if (c == EOF) {
//         *word++ = c;
//     } 
//     if (!isalpha(c) && c!='_') {
//         *word = '\0';
//         return c;
//     }
//     *word++ = c;
    
//     for (; --lim>0; word++){
//         if(!isalnum(c=getchar()) && c!='_'){
//             ungetc(c, stdin);
//             break;
//         } else if(c=='"' || c=='\'') {
//             // 处理字符串或字符字面量
//             while(skip=getchar()){
//                 if (skip=='\\'){
//                     getchar(); // 跳过转义字符
//                 } else if (skip==c || skip==EOF){
//                     break;
//                 }
//             }
//         }else if (c=='/') {
//             // 处理注释
//             if ((skip=getchar())=='/'){
//                 while((skip=getchar())!='\n' && skip!=EOF){;}
//             } else if (skip=='*'){
//                 while((skip==getchar())!=EOF){
//                     if (skip=='*' && (skip=getchar())=='/'){
//                         break;
//                     } else{
//                         ungetc(skip, stdin);
//                     }
//                 }
//             }
//         }else{
//             *word = c;
//         }
//     }

//     *word = '\0';
//     return w[0];
// }

int getword(char *word, int lim){
    char c;
    int n;
    while(isspace(c=getchar())) {;}
    if (c == EOF) {
        *word++ = c;
    }
    if (c!= EOF){
        *word++=c;
    }
    if (isalpha(c) || c=='_'){
        for(; --lim>0; word++){
            if(!isalnum(c=getchar()) && c!='_'){
                ungetc(c, stdin);
                break;
            }else{
                *word = c;
            }
        }
    } else if(c=='#'){
        while((c=getchar())!='\n' && c!=EOF){;}
    } else if(c=='"'||c=='\''){
        while((c=getchar())!=EOF){
            if(c=='\\'){
                getchar();
            } else if(c=='"' || c=='\''){
                break;
            }
        }
    } else if(c=='/'){
        if((c=getchar())=='/'){
            while((c=getchar())!=EOF){;}
        } else if(c=='*'){
            while((c=getchar())!=EOF){
                if(c=='*' && (c=getchar())=='/'){
                    break;
                } 
            }
        } else{
            ungetc(c, stdin);
        }
    }
    *word = '\0';
    return c;
}