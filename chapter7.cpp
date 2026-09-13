#include <stdio.h>
#include <ctype.h>

//int main(void){
//	unsigned int u;
//	scanf("%u", &u);
//	printf("%u\n", u);
//	scanf("%o", &u);
//	printf("%o\n", u);
//	scanf("%x", &u);
//	printf("%x\n", u);
//	
//	short s;
//	scanf("%hd", &s);
//	printf("%hd\n", s);
//	
//	long l;
//	scanf("%ld", &l);
//	printf("%ld\n", l);
//	
//	long long ll;
//	scanf("%lld", &ll);
//	printf("%lld\n", ll);
//	return 0;
//}

//int main(void){
//	int count=0;
//	while(getchar() != '\n'){
//		count++;
//	}
//	printf("Your message is %d character(s) long!", count);
//	return 0;
//}

int main(void){
	typedef long int Prediction;
	printf("Size of int: %ld \n", long (sizeof(int)));
	printf("Size of long: %ld \n", long (sizeof(long)));
	printf("Size of long long: %ld \n", long (sizeof(long long)));
	printf("Size of Prediction: %ld \n", long (sizeof(Prediction)));
	printf("Size of float: %ld \n", long (sizeof(float)));
	printf("Size of double: %ld \n", long (sizeof(double)));
	return 0; 
}


