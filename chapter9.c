//#include <stdio.h>
//#include <ctype.h>
//
//double average(double a, double b){
//	return (a+b)/2.0;
//}
//
//int main(void){
//	double a, b, c;
//	printf("Enter 3 numbers:");
//	scanf("%lf %lf %lf", &a, &b, &c);
//	printf("Average of %.4lf and %.4lf = %.4lf\n", a, b, average(a, b));
//	printf("Average of %.4lf and %.4lf = %.4lf\n", a, c, average(a, c));
//	printf("Average of %.4lf and %.4lf = %.4lf\n", b, c, average(b, c));
//	return 0;
//}


//#include <stdio.h>
//#include <ctype.h>

//void print_count(int n){
//	printf("T minus %d and cpunting.\n", n);
//}
//
//int main(void){
//	for(int i=10;i>0;i--){
//		print_count(i);
//	}
//	return 0;
//}


// 9.1.1

//double 
//average(double a, double b){
//	return (a+b)/2.0;
//}

//double average(double a, double b){
//	double sum;
//	sum = a + b;
//	return sum / 2.0;
//}

// 9.1.2

//#include <stdio.h>
//#include <stdbool.h>
//#include <ctype.h>
//
//bool is_prime(int n){
//  if (n<=1) return false;
//	for(int i=2; i*i<=n; i++){
//		if (n%i==0) return false;
//	}
//	return true;
//}
//
//int main(void){
//	int n;
//	printf("Enter a number:");
//	scanf("%d", &n);
//	if (is_prime(n)){
//		printf("Prime\n");
//	}else{
//		printf("Not Prime\n");
//	}
//	return 0;
//}

// 9.2

//#include <stdio.h>
//#include <stdbool.h>
//#include <ctype.h>
//
//bool is_prime(int n);
//
//int main(void){
//	int n;
//	printf("Enter a number:");
//	scanf("%d", &n);
//	if (is_prime(n)){
//		printf("Prime\n");
//	}else{
//		printf("Not Prime\n");
//	}
//	return 0;
//}
//
//bool is_prime(int n){
//  if (n<=1) return false;
//	for(int i=2; i*i<=n; i++){
//		if (n%i==0) return false;
//	}
//	return true;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//bool is_prime(int n){
//	bool prime = true;
//	for(int i=2; i*i<=n; i++){
//		if (n%i ==0) {
//			prime = false;
//			break;
//		}
//	}
//	return prime;
//}
//
//int main(){
//	int n;
//	printf("Enter a number: ");
//	scanf("%d", &n);
//	if (is_prime(n)) {
//		printf("%d is a prime!", n);
//	} else{
//		printf("%d is not a prime!", n);
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int fact(int n){
	if (n>1){
		return n * fact(n-1);
	} else{
		return 1;
	} 
}

int power(int x, int n){
	if (n==0){
		return 1;
	} else{
		return x * power(x, n-1);
	}
}

int main(void){
	int x, n;
	printf("Enter a number: ");
	scanf("%d", &x);
	printf("Enter a power: ");
	scanf("%d", &n);
	printf("%d! = %d\n", x, fact(x));
	printf("pow(%d,%d) = %d\n", x, n, power(x, n));
	return 0;
}















