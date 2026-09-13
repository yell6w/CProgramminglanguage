#include <stdio.h>

/*
int main(void){
	int i=0,j=1;
	float x=1.2f;
	printf("%d\n",i,j);
	printf("%f %d\n", i,x);
	return 0;
}
*/

//int main(void){
//	int i=0;
//	float x=1.2;
//	
//	i = 40;
//	x = 839.21f;
//	printf("|%d|%5d|%-5d|%5.3d\n",i,i,i,i);
//	printf("|%10.3f|%10.3e|%-10g|\n",x,x,x,x);;
//	return 0;
//}

//int main(void){
//	int i,j;
//	float x,y;
//	scanf("%d %d %f %f", &i, &j, &x, &y);
//	printf("%d %d %f %f", i, j, x, y);
//	return 0;
//}

//int main(void){
//	int i;
//	scanf("%d\n", &i); // 会导致程序一直挂起
//	return 0;
//}


//int main(void){
//	printf("%6d,%4d\n",86,1040);
//	printf("%12.5e\n",30.253);
//	printf("%.4f\n",83.162);
//	printf("%-6.2g\n",.000009979);
//	return 0;
//}

//int main(void){
//	int day, month, year;
//	printf("Enter a date mm/dd/yyyy:");
//	scanf("%d/%d/%d", &month, &day, &year);
//	printf("You entered a date %d%.2d%.2d", year, month, day);
//	return 0;
//}

//int main(void){
//	int item, day, month, year;
//	float price;
//	printf("Enter item number:");
//	scanf("%d", &item);
//	printf("Enter unit price:");
//	scanf("%f", &price);
//	printf("Enter purchae date (mm/dd/yyyy):");
//	scanf("%d/%d/%d", &month, &day, &year);
//	printf("Item\tUnit\tPurchase\n");
//	printf("\tPrice\tDate\n");
//	printf("%-d\t$%7.2f\t%.2d/%d/%d\n", item, price, month, day, year);
//	return 0;
//}

//int main(void){
//	int gs1, group_id, p_code, i_num, c_digit;
//	printf("Enter ISBN:");
//	scanf("%d-%d-%d-%d-%d", &gs1, &group_id, &p_code, &i_num, &c_digit);
//	printf("GSI prefix: %d\n", gs1);
//	printf("Group Identifer: %d", group_id);
//	return 0;
//}

//int main(void){
//	int group_1, group_2, group_3;
//	printf("Enter the phone number: [(xxx) xxx-xxxx]");
//	scanf("(%d) %d-%d", &group_1, &group_2, &group_3);
//	printf("You entered %d.%d.%d", group_1, group_2, group_3);
//	return 0;
//}

int main(void){
	int frac1,denum1,frac2,denum2;
	int frac, denum;
	printf("Enter two fractions by a plus sign:");
	scanf("%d/%d+%d/%d", &frac1,&denum1,&frac2,&denum2);
	frac = frac1 * denum2 + frac2 * denum1;
	denum = denum1 * denum2;
	printf("Result = %d/%d\n", frac, denum);
	return 0;
}

