// 单词计数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<stdio.h>
#include<iostream>

#define IN 1   /*在单词内*/
#define OUT 0  /*在单词外*/

int main() {
	int c;
	int state;
	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '/n' && c != '\t') {
			state = IN;
			printf("%c", c);
		else if(state == IN){
			putchar('\n');
			state = OUT;
		}
	}
	printf("%d\t%d\t%d\n", nl, nw, nc);
}
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
