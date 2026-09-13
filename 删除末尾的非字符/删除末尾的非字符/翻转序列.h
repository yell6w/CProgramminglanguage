#pragma once
#include<iostream>
#include<stdio.h>

void reverse(char trans, char prev) {
	int i, j;
	i = j = 0;
	while (prev[i] != '\0') {
		i++;
	}
	if (prev[i] == '\n')
		i--;
	while (i >= 0) { 
		trans[j] = prev[i];
		i--;
		j++;
	}
	trans[j] = '\0';
}