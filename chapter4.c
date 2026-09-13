#include <stdio.h>

//int main(void){
//	int d, i1, i2, i3, i4, i5;
//	int j1, j2, j3, j4, j5;
//	int sum_1, sum_2, total;
//	
//	printf("Enter the first (single) digit:");
//	scanf("%1d", &d);
//	printf("Enter the first group of five digits: ");
//	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
//	printf("Enter the second group of five digits: ");
//	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
//	sum_1 = d + i2 + i4 + j1 + j3 + j5;
//	sum_2 = i1 + i3 + i5 + j2 + j4;
//	total = 3 * sum_1 + sum_2;
//	printf("Check digit: %d\n", 9-((total-1)%10));
//	return 0;
//}


//int main(void){
//	
//	int number, number_reversed;
//	int a, b, c;
//	printf("Enter a number:");
//	scanf("%3d", &number);
//	a = number / 100;
//	number -= 100 * a;
//	b = number / 10;
//	c = number - 10 * b; 
//	printf("Reversed number: %d%d%d\n", c,b,a);
//	return 0;
//}

//int main(void){
//	int number, oct_number;
//	printf("Enter a number between 0 and 32767:");
//	scanf("%d", &number);
//	printf("In octal, your number is %d%d%d%d%d\n",
//			number/8/8/8/8%8, number/8/8/8%8, number/8/8%8, number/8%8, number%8);
//	return 0;
//}

int main(void){
	int a,b,c,d,e,f,g,h,i,j,k,l;
	int number_1, number_2, digit;
	printf("Enter an ean:");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);
	number_1 = b + d + f + h + j + l;
	number_2 = a + c + e + g + i + k; 
	digit = 9 - (number_1 * 3 + number_2 - 1) % 10;
	printf("%d\n", digit);
	return 0;
}
