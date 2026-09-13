// 函数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include <stdio.h>
#define MAXLINE 1000
int getline(char line[], int maxline);
void copy(char to[], char from[]);
int main() {
	int max,len;
	char line[MAXLINE];
	char longest[MAXLINE];
	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	printf("%s", longest);
	return 0;
}
int getline(char line[], int lim) {
	int i,c;
	for (i = 0; i <= lim - 1 && (c = getchar()) != '\n' && c != EOF; i++) {
		line[i] = c;
	}
	if (c == '\n') {
		line[i] = c;
	}
	return i;
 }
 void copy(char to[], char from[]) {
	 int i;
	 i = 0;
	 while((to[i] = from[i]) != '/0'){
		 i++;
	 }
 }