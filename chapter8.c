#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

#define N 10

//int main(void){
//	int a[N], i=0;
//	printf("Enter a array:");
//	for(int i=0; i<N; i++){
//		scanf("%d", &a[i]);
//	}
//	printf("Reverse array:");
//	for(i=N-1;i>=0;i--){
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main(void){
//	
//	#define NUM_RATES ((int) (sizeof(value)/sizeof(value[0])))
//	#define INITIAL_BALANCE 100.00
//	
//	int i, low_rate, num_years, year;
//	double value[5];
//	
//	printf("Enter interest rate:");
//	scanf("%d", &low_rate);
//	printf("Enter the number of years:");
//	scanf("%d", &num_years);
//	
//	printf("\nyears");
//	for(i=0;i<=NUM_RATES;i++){
//		printf("%6d%", low_rate+i);
//		value[i] = INITIAL_BALANCE; 	
//	}
//	printf("\n");
//	for(year=1;year<=num_years;year++){
//		printf("%3d  ", year);
//		for(i=0;i<=NUM_RATES;i++){
//			value[i] += value[i] * (low_rate+i) / 100.0;
//			printf("%7.2f", value[i]); 	
//		}
//		printf("\n");	
//	}
//	return 0;
//}

//#define NUM_SUITS 4
//#define NUM_RANKS 13

//int main(void){
//	bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
//	int num_cards, rank, suit;
//	const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 
//	                          't', 'j', 'q', 'k', 'a'};
//	const char suit_code[] = {'c', 'd', 'h', 's'};
//	srand((unsigned) time(NULL));
//	printf("Enter number of cards in your hand: ");
//	scanf("%d", &num_cards);
//	printf("In your hands: ");
//	while (num_cards>0){
//		suit = rand() % NUM_SUITS;
//		rank = rand() % NUM_RANKS;
//		if (!in_hand[suit][rank]){
//			in_hand[suit][rank] = true;
//			num_cards --;
//			printf(" %c%c", rank_code[rank], suit_code[suit]);
//		}
//	}
//	printf("\n");
//	return 0;
//}

// #include <stdbool.h>

//int main(void){
//	// bool weekend[7] = {true, false, false, false, false, false, true};
//	bool weekend[7] = {false, [0]=true, [6]=true};
//	for (int i=0;i<(sizeof(weekend)/sizeof(weekend[0]));i++)
//		printf("%d ", weekend[i]);
//}


//int main(void){
//	#define SIZE 40
//	int fib_number[SIZE] = {0,1};
//	for(int i=2;i<SIZE;i++){
//		fib_number[i] = fib_number[i-1] + fib_number[i-2];
//	}
//	for(int i=0;i<SIZE;i++){
//		printf("%d ", fib_number[i]);
//	}
//}

//int main(void){
//	int number, prod;
//	int repeated[10] = {0};
//	
//	printf("Enter a number:");
//	scanf("%d", &number);
//	do {
//		repeated[number%10] += 1;
//		number /= 10;
//	} while(number>0);
//	printf("Repeated NUmber: ");
//	for(int i=0;i<10;i++){
//		if(repeated[i]>1){
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//int main(void){
//	int number, prod;
//	int repeated[10] = {0};
//	
//	printf("Enter a number:");
//	scanf("%d", &number);
//	do {
//		repeated[number%10] += 1;
//		number /= 10;
//	} while(number>0);
//	for(int i=0;i<10;i++){
//		printf("%6d", i);
//	} 
//	printf("\n");
//	for(int i=0;i<10;i++){
//		printf("%6d", repeated[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main(void){
//	int number, prod;
//	int repeated[10] = {0};
//	printf("Enter a number:");
//	scanf("%d", &number);
//	while(number!=0){
//		do {
//			repeated[number%10] += 1;
//			number /= 10;
//		} while(number>0);
//		printf("Repeated NUmber: ");
//		for(int i=0;i<10;i++){
//			if(repeated[i]>1){
//				printf("%d ", i);
//			}
//			repeated[i] = 0;
//		}
//		printf("\n");
//		printf("Enter a number:");
//		scanf("%d", &number);
//	}
//	return 0;
//}


//int main(void){
//	#define NUM_STU 5
//	#define NUM_CLS 5
//	int score[NUM_STU][NUM_STU] = {0};
//	int max=0, min=100;
//	float mean;
//	for(int i=0;i<NUM_STU;i++){
//		printf("Enter row %d:",i+1);
//		for (int j=0;j<NUM_CLS;j++){
//			scanf("%d", &score[i][j]);
//		}
//	}
//	for(int i=0;i<NUM_STU;i++){
//		for (int j=0;j<NUM_CLS;j++){
//			if (score[i][j] > max) max=score[i][j];
//			if (score[i][j] < min) min=score[i][j];
//			mean += score[i][j] / ((float) NUM_CLS);
//		}
//		printf("Student %d max %d min %d mean %.4f\n", i+1, max, min, mean);
//		mean = 0.0f;
//	}
//	for(int j=0;j<NUM_CLS;j++){
//		for(int i=0;i<NUM_STU;i++){
//			if (score[i][j] > max) max=score[i][j];
//			if (score[i][j] < min) min=score[i][j];
//			mean += score[i][j] / ((float) NUM_STU);
//		}
//		printf("Class %d max %d min %d mean %.4f\n", j+1, max, min, mean);
//		mean = 0.0f;
//	}
//}

int main(void){
	#define UP 0
	#define DOWN 1
	#define LEFT 2
	#define RIGHT 3
	#define SIZE 10
	#define LETTERS 26
	
	char matrix[SIZE][SIZE] = {'.'};
	char current_character = 'A';
	bool occupied[SIZE+2][SIZE+2] = {false};
	int i,j,action;
	srand((unsigned) time(NULL));
	
	i = rand() % SIZE;
	j = rand() % SIZE;
	matrix[i][j] = current_character;
	occupied[i+1][j+1] = true;
	
	for (int x = 0; x < SIZE; x++){
        for (int y = 0; y < SIZE; y++)
            matrix[x][y] = '.';
	}
            
    for (int x = 0; x < SIZE+2; x++){
        for (int y = 0; y < SIZE+2; y++)
            if (x==0 || y==0 || x==SIZE+1 || y==SIZE+1)
				occupied[x][y] = true;
	}
	
	for(int n=2; n<=26; ){
		action = rand() % 4;	
		switch(action){
			case UP: 
				i = i - 1;
				if(i<0){
					i += 1;
					break;
				} else if (matrix[i][j]=='.'){
					current_character += 1;
					matrix[i][j] = current_character;
					n++;
					occupied[i+1][j+1] = true;
					break;
				} else {
					i += 1;
					break;
				}
			case DOWN:
				i = i + 1;
				if(i>9){
					i -= 1;
					break;
				} else if (matrix[i][j]=='.'){
					current_character += 1;
					matrix[i][j] = current_character;
					n++;
					occupied[i+1][j+1] = true;
					break;
				} else {
					i -= 1;
					break;
				}
			case RIGHT: 
				j = j + 1;
				if(j>9){
					j -= 1;
					break;
				} else if (matrix[i][j]=='.'){
					current_character += 1;
					matrix[i][j] = current_character;
					n++;
					occupied[i+1][j+1] = true;
					break;
				} else {
					j -= 1;
					break;
				}
			case LEFT:
				j = j - 1;
				if(j<0){
					j += 1;
					break;
				} else if (matrix[i][j]=='.'){
					current_character += 1;
					matrix[i][j] = current_character;
					n++;
					occupied[i+1][j+1] = true;
					break;
				} else {
					j += 1;
					break;
				}
		bool stuck =  (occupied[i][j+1] && occupied[i+2][j+1] && 
						occupied[i+1][j] && occupied[i+1][j+2]);
		if(stuck) break; 
		}
	}
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("%c ", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
