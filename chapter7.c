#include <stdio.h>
#include <ctype.h>

//int main(void){
//	int a=077, b=0x77, c=0XABC;
//	int i=010E2;
//	float j=32.1E5;
//	// int k=0790;
//	// int m=100_000;
//	float n=3.978e-2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}

//int main(void){
//	char a='a';
//	int b=0b1000001, c=0101, d=0x41;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d\n", d);
//}

//int main(void){
//	char c = '\1';
//	short s = 2;
//	int i = -3;
//	long m = 5;
//	float f = 6.5f;
//	double d = 7.5;
//	
//	printf("%d\n",c*i);
//	printf("%f\n",f/c);
//	printf("%lf\n",f-d);
//	printf("%ld\n",s+m);
//	printf("%lf\n",d/s);
//	printf("%d\n", (int) f);
//}

//#define TRUE 1
//int main(void){
//	int n=1, square=1;
//	short sn=1, ssquare=1;
//	long ln=1, lsquare=1;
//	
//	int max_num;
//	do {
//		square = n * n;
//		if (square/n!=n) break;
//		n++;
//	} while(TRUE);
//	printf("Max value for sqrt int is %d.\n", n-1);
//	max_num = (n-1)*(n-1);
//	printf("Max value for int is %d.\n", max_num);
//	
//	short s_max_num;
//	do {
//		ssquare = sn * sn;
//		if (ssquare/sn!=sn) break;
//		sn++;
//	} while(TRUE);
//	printf("Max value for sqrt short is %hd.\n", sn-1);
//	s_max_num = (sn-1)*(sn-1);
//	printf("Max value for short is %hd.\n", s_max_num);
//	
//	long l_max_num;
//	do {
//		lsquare = ln * ln;
//		if (lsquare/ln!=ln) break;
//		ln++;
//	} while(TRUE);
//	printf("Max value for sqrt long is %ld.\n", ln-1);
//	l_max_num = (ln-1)*(ln-1);
//	printf("Max value for long is %ld.\n", l_max_num);
//}

//int main(void){
//	int i=1;
//	char c='\n';
//	while(c=='\n'){
//		printf("square(%d) = %d\n",i, i*i);
//		if (i%24==0){
//			printf("Please enter to continue ...\n");
//			c = getchar();
//		}
//		i++;
//	}
//	return 0;
//}

//int main(void){
//	char c;
//	printf("Enter phone number:");
//	do{
//		c = getchar();
//		switch(c){
//			case 'A': case 'B': case 'C':
//				printf("%d", 2); break;
//			case 'D': case 'E': case 'F':
//				printf("%d", 3); break;
//			case 'G': case 'H': case 'I':
//				printf("%d", 4); break;
//			case 'J': case 'K': case 'L':
//				printf("%d", 5); break;
//			case 'M': case 'N': case 'O':
//				printf("%d", 6); break;
//			case 'P': case 'R': case 'S':
//				printf("%d", 7); break;
//			case 'T': case 'U': case 'V':
//				printf("%d", 8); break;	
//			case 'X': case 'Y': case 'Z':
//				printf("%d", 9); break;	
//			default:
//				putchar(c); break;	
//		}
//	} while (c!='\n');
//	printf("\n");
//	return 0;
//}


//int main(void){
//	int sum = 0;
//	char c;
//	printf("Enter a word:");
//	do {
//		c = getchar();
//		switch (toupper(c)){
//			case 'A': case 'E': case 'I': case 'L': case 'N': 
//			case 'O': case 'R': case 'S': case 'T': case 'U':
//				sum += 1; break;
//			case 'D': case 'G': sum += 2; break;
//			case 'B': case 'C': case 'M': case 'P': sum += 3; break;
//			case 'F': case 'H': case 'V': case 'W': case 'Y': sum += 4; break;
//			case 'K': sum += 5; break;
//			case 'J': case 'X': sum += 8; break;
//			case 'Q': case 'Z': sum += 10; break;
//			default: sum+=0; break;
//		}
//	} while (c !='\n');
//	printf("Scrable value: %d\n", sum);
//}

//int main(void){
//	printf("Size of int %d\n", (int) sizeof(int));
//	printf("Size of short %d\n", (int) sizeof(short));
//	printf("Size of long %d\n", (int) sizeof(long));
//	printf("Size of float %d\n", (int) sizeof(float));
//	printf("Size of double %d\n", (int) sizeof(double));
//	printf("Size of long double %d\n", (int) sizeof(long double));
//	return 0;
//}

//int main(void){
//	int hour, minute;
//	char c;
//	printf("Enter a time:");
//	scanf(" %d : %d ", &hour, &minute);
//	
//	do {
//		c = toupper(getchar());
//		if (c=='P') hour+=12;
//	} while(c!='\n');
//	
//	printf("Equivalent 24 hour time: %d:%d.\n", hour, minute);
//	
//	return 0;
//}

//int main(void){
//	char c, Letter;
//	printf("Enter a first name and a last name:");
//	scanf(" %c", &Letter);
//	for(;(c=getchar())!= ' ';);
//	for(;;){
//		c = getchar();
//		if (c != ' ' && c != '\n') 
//			putchar(c);		
//		else
//			break;
//	}
//	putchar(',');
//	putchar(' ');
//	putchar(toupper(Letter));
//	putchar('\n');
//	return 0;
//}

int main(void){
	float ret, digit;
	char label;
	printf("Enter an expression:");
	scanf(" %f", &ret);
	for(;(label=getchar())==' ';);
	while (label!='\n') {
		scanf(" %f", &digit);
		switch (label){
			case '+': ret += digit; break;
			case '-': ret -= digit; break;
			case '*': ret *= digit; break;
			case '/': ret /= digit; break;
		}
		for(;(label=getchar())==' ';);
		 // if (label == '+' || label == '-' || label == '*' || label == '/' || label=='\n') break;
		
		printf("%f\n", digit);
		printf("%c\n", label);
	}
	printf("Ret is %.1f.", ret);
	return 0;
}

