// 删除末尾的非字符.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdio.h>
#define MAXLINE 1000
char line[MAXLINE];
char motif[MAXLINE];
char rline[MAXLINE]
int getline(char s[], int max);
int remove(char remain[], char previous[]);
int main() {
	int length;
	while ((length = getline(line, MAXLINE)) > 0) {
		if (remove(motif, line) == 0)
			;
		else {
			printf("%d\n", remove(motif, line));
			printf("%s", motif);
			reverse(rline, motif);
			printf("%s", rline);

		}
	}
}
int getline(char s[], int max) {
	int c,i;
	i = 0;
	while ((c = getchar()) != '\n' && i < max) {
		s[i] = c;
		i++;
	}
	return i;
}
int remove(char remain[], char previous[]) {
	int i;
	i = 0;
	while ((remain[i] = previous[i]) != '\0') {
		i++;
	}
	i = i - 2;
	while (remain[i] == ' ' || remain[i] == '\t') {
		remain[i] = '\n';
		remain[i+1] = '\0'
		i--;
	}
	return i++;
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
