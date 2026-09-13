#include <stdio.h>

/****************************
*int main(void){
*	printf("        *\n");
*	printf("       *\n");
*	printf("      *\n");
*	printf("*    *\n");
*	printf(" *  *\n");
*	printf("  *\n");
*	return 0;
}
****************************/

//int main(void){
//	
//	int r=10;
//	float volume, pi=3.14f;
//	printf("Input a radius value:");
//	scanf("%d", &r);
//	volume = 4.0f / 3.0f * pi * r * r * r;
//	printf("Volume = %.4f", volume);
//	return 0;
//}

//#define TAX_RATIO 0.05f
//
//int main(void){
//	float original_amount=0.0, amount_with_tax=0.0;
//	printf("Input amount of cash:");
//	scanf("%f", &original_amount);
//	amount_with_tax = original_amount * (1+TAX_RATIO);
//	printf("Amount added tax=%.2f\n", amount_with_tax);
//	return 0;
//}


//int main(void){
//	float x=0.0f, value=-6.0f;
//	printf("Enter x:");
//	scanf("%f", &x);
//	// value = 3 * x * x * x * x * x * x + 2 * x * x * x * x - 3 * x * x * x - x * x + 7 * x -6;
//	// printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6 =%.4f", value);
//	value = (((3*x + 2) * x - 1) * x + 7) * x -6;
//	printf("(((3*x + 2) * x - 1) * x + 7) * x -6 =%.4f", value);
//	return 0;
//}


//int main(void){
// 	int amount = 0, twenty=20, ten=10, five=5, one=1;
//	int twenty_amount, ten_amount, five_amount, one_amount;
//	printf("Enter a dollar amount:");
//	scanf("%d", &amount);
//	
//	twenty_amount = amount / twenty;
//	amount -= twenty * twenty_amount;
//	ten_amount = amount / ten;
//	amount -= ten * ten_amount;9
//	five_amount = amount / five;
//	amount -= five * five_amount;
//	one_amount = amount / one;
//	printf("Twenty=%d Ten=%d Five=%d One=%d\n", twenty_amount, ten_amount, five_amount, one_amount);
//	return 0;
//}


int main(void){
	float loan, ratio, payment;
	printf("Enter amount of loan:");
	scanf("%f", &loan);
	printf("Enter the interest ratio:");
	scanf("%f", &ratio);
	printf("Enter the interest payment:");
	scanf("%f", &payment);
	loan = loan - payment + loan * ratio / 100.0f / 12.0f;
	printf("Remaining of loan of first month: %.2f\n", loan);
	loan = loan - payment + loan * ratio / 100.0f / 12.0f;
	printf("Remaining of loan of second month: %.2f\n", loan);
	loan = loan - payment + loan * ratio / 100.0f / 12.0f;
	printf("Remaining of loan of third month: %.2f\n", loan);
	return 0;
}







