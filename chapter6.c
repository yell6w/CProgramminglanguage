#include <stdio.h>

//int main(void){
//	int i=1, n;
//	printf("This program prints a table of squres.\n");
//	printf("Enter a number of entries:");
//	scanf("%d", &n);
//	while (i<=n){
//		printf("%10d\t%10d\n", i, i*i);
//		i++;
//	}
//	return 0;
//}

//int main(void){
//	int sum=0, i;
//	printf("This program sums a series of integers.");
//	printf("Enter integers (0 to terminate):");
//	scanf("%d", &i);
//	while (i){
//		scanf("%d", &i);
//		sum += i;
//	}
//	printf("\n");
//	printf("The sum is %d.", sum);
//	return 0;
//}


//int main(void){
//	int digit=0, n=0;
//	printf("Enter a nonnegative integer: ");
//	scanf("%d", &n);
//	do{
//		n /= 10;
//		digit++;
//	} while(n>0);
//	printf("The number has %10d digits.", digit);
//	return 0;
//}

//int main(void){
//	int n;
//	printf("This program prints a table of squres.\n");
//	printf("Enter a number of entries:");
//	scanf("%d", &n);
//	for (int i=1; i<=n; i++){
//		printf("%10d\t%10d\n", i, i*i);
//	}
//	return 0;
//}

//#define CLEAR 0
//#define CREDIT 1
//#define DEBIT 2
//#define BALANCE 3
//#define EXIT 4
//
//
//int main(void){
//	int command=0;
//	float balance=0.0f, credit, debit;
//	printf("**** ACME checkbook-balancing program ****\n");
//	printf("Commands: 0=clear 1=credit 2=debit 3=balance 4=exit\n");
//	while(1){
//		printf("Enter a command:");
//		scanf("%d", &command);
//		switch(command){
//			case CLEAR: balance=0.0f; break;
//			case CREDIT: 
//				printf("Enter the amount of credit:");
//				scanf("%f", &credit);
//				balance += credit;
//				break;
//			case DEBIT:
//				printf("Enter the amount of debit:");
//				scanf("%f", &debit);
//				balance -= debit;
//				break;
//			case BALANCE:
//				printf("Current balance: $%.2f\n", balance);
//				break;
//			case EXIT:
//				return 0;
//			default:
//				printf("Commands: 0=clear 1=credit 2=debit 3=balance 4=exit\n");
//				break;
//		}
//	}
//	return 0;
//}

//int main(void){
//	int i, max=0;
//	printf("Enter a number:");
//	scanf("%d", &i);
//	if (i>max) max=i;
//	while(i>0){
//		printf("Enter a number:");
//		scanf("%d", &i);
//		if (i > max) max = i;
//	}
//	printf("The largest number entered was %d.\n", max);
//	return 0;
//}

//int GCD(int m, int n){
//	int prod;
//	// printf("Enter two integers:");
//	// scanf("%d %d", &m, &n);
//	while(n!=0) {
//		prod = m % n;
//		m = n;
//		n = prod;
//	} 
//	printf("Gretest common divisor: %d.\n", m);
//	return m;
//}
//
//int main(void){
//	int m, n, gcd;
//	printf("Enter a frac:");
//	scanf("%d/%d", &m, &n);
//	gcd = GCD(m, n);
//	printf("In lowest term %d/%d.\n", m/gcd, n/gcd);
//	return 0;
//}

//int main(void){
//	int i=1, number;
//	printf("Enter a integer:");
//	scanf("%d", &number);
//	while(i*i<=number){
//		if (i%2==0){
//			printf("%d\n",i*i);
//		} 
//		i++;
//	}
//}

//int main(void){
//	int number;
//	printf("Enter a integer:");
//	scanf("%d", &number);
//	for (int i=2; i*i<=number; i+=2){
//		printf("%d\n",i*i);
//	}
//}

//int main(void){
//	int n;
//	float prod=1.0f, approximate=1.0f;
//	printf("Enter a number:");
//	scanf("%d",&n);
//	for (int i=1;i<=n;i++){
//		prod = 1;
//		for (int j=1; j<=i; j++){
//			prod *= j;
//		}
//		approximate += 1.0f/prod;
//		printf("n = %d e approximate = %.6f.\n", i, approximate);
//	}
//	return 0;
//}

//int main(void){
//	int i=1;
//	float epsilon, current=1.0f, prod=1.0f, approximate=1.0f;
//	printf("Enter a epsilon:");
//	scanf("%f", &epsilon);
//	while (current >= epsilon){
//		prod = 1;
//		for (int j=1; j<=i; j++){
//			prod *= j;
//		}
//		current = 1.0f/prod;
//		approximate += current;
//		printf("i = %d approximate = %.6f.\n", i, approximate);
//		i++;
//	}
//	printf("approximate = %.6f.\n", approximate);
//	return 0;
//}

#define TURE 1

int main(void){
	int m1,m2,d1,d2,y1,y2;
	int current_m1,current_m2,current_d1,current_d2,current_y1,current_y2;
	int m, d, y;
	int current_m, current_d, current_y;
	
	printf("Enter a date (mm/dd/yy):");
	scanf("%1d%1d/%1d%1d/%1d%1d",
		 &current_m1, &current_m2, &current_d1,
		 &current_d2, &current_y1, &current_y2);
		 
	m = current_m = 10 * current_m1 + current_m2;
	d = current_d = 10 * current_d1 + current_d2;
	y = current_y = 10 * current_y1 + current_y2;
	
	while(TURE){
		printf("Enter a date (mm/dd/yy):");
		scanf("%1d%1d/%1d%1d/%1d%1d",
			 &current_m1, &current_m2, &current_d1,
			 &current_d2, &current_y1, &current_y2);
		
		if (current_m1==0&&current_m2==0&&current_d1==0&&current_d2==0&&current_y1==0&&current_y2==0) break;
		
		current_m = 10 * current_m1 + current_m2;
		current_d = 10 * current_d1 + current_d2;
		current_y = 10 * current_y1 + current_y2;
		
		if (current_y < y){
			y = current_y;
			m = current_m;
			d = current_d;
			m1 = current_m1;
			m2 = current_m2;
			d1 = current_d1;
			d2 = current_d2;
			y1 = current_y1;
			y2 = current_y2;
		}
		if (current_y == y && current_m < m){
			y = current_y;
			m = current_m;
			d = current_d;
			m1 = current_m1;
			m2 = current_m2;
			d1 = current_d1;
			d2 = current_d2;
			y1 = current_y1;
			y2 = current_y2;
		} 
		if (current_y == y && current_m == m && current_d < d){
			y = current_y;
			m = current_m;
			d = current_d;
			m1 = current_m1;
			m2 = current_m2;
			d1 = current_d1;
			d2 = current_d2;
			y1 = current_y1;
			y2 = current_y2;
		} 
	}
	
	printf("Ealier time is %d%d/%d%d/%d%d\n", m1, m2, d1, d2, y1, y2);
	return 0;
}
