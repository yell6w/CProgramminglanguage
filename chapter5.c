#include <stdio.h>

#define TRUE 1
#define FALSE 0 

//int main(void){
//	float price, commision;
//	printf("Enter value of trade:");
//	scanf("%f", &price);
//	if (price < 2500){
//		commision = 30 + 0.017f * price;
//	} else if (price<6250){
//		commision = 56 + 0.0066f * price;
//	} else if (price < 20000){
//		commision = 76 + 0.0034f * price;
//	} else if (price < 50000){
//		commision = 100 + 0.0022f * price;
//	} else if (price < 500000){
//		commision = 155 + 0.0011f * price;
//	} else {
//		commision = 255 + 0.0009f * price;	
//	}
//	if (commision<39.00f)
//		commision = 39.00f;
//	
//	printf("Commision is:%.2f\n", commision);
//	return 0;
//}

//int main(void){
//	_Bool flag=1;
//	if (flag) printf("AAAA");
//}

//int main(void){
//	int grade=4;
//	switch (grade){
//	case 4: printf("aaa\n");
//			break;
//	case 3: printf("bbb\n");
//			break;
//	case 2: printf("ccc\n");
//			break;
//	default: printf("mmm\n");
//			break;
//	}
//	return 0;
//}

//int main(void){
//	int year, month, day;
//	printf("Enter date (mm/dd/yyyy) :");
//	scanf("%d/%d/%d", &month, &day, &year);
//	printf("Date is %d ", day);
//	switch (day){
//		case 1: case 21: case 31:  printf("st"); break;
//		case 2: case 22:  printf("nd"); break;
//		case 3: case 23:  printf("rd"); break;
//		default: printf("th"); break;
//	}
//	printf(" of ");
//	switch(month){
//		case 1: printf("January"); break;
//		case 2: printf("February");break;
//		case 3: printf("March");break;
//		case 4: printf("April");break;
//		case 5: printf("May");break;
//		case 6: printf("June");break;
//		case 7: printf("July");break;
//		case 8: printf("August");break;
//		case 9: printf("September");break;
//		case 10: printf("October");break;
//		case 11: printf("Movember");break;
//		case 12: printf("December");break;
//	}
//	printf(", %d.\n", year);
//	return 0;
//}


//int main(void){
//	int number ,digit=0;
//	printf("Enter a number: ");
//	scanf("%d", &number);
//	number /= 10;
//	if (number == 0) {
//		digit = 1;
//	} else{
//		number /= 10;
//		if (number==0){
//			digit = 2;
//		} else {
//			number /= 10;
//			if (number==0){
//				digit = 3;
//			} else{
//				number /= 10;
//				if (number==0){
//					digit = 4;
//				}
//			}
//		}
//	}
//	
//	printf("The number has %d digits!", digit);
//	return 0;
//}

//int main(void){
//	int hour, min;
//	printf("Enter a 24-hour time: ");
//	scanf("%d:%d", &hour, &min);
//	if (hour < 12){
//		printf("Equivalent 12-hour time: %d:%d AM\n", hour, min);
//	}else if (hour==12 && min==0){
//		printf("Equivalent 12-hour time: %d:%d AM\n", hour, min);
//	} else {
//		printf("Equivalent 12-hour time: %d:%d PM\n", hour-12, min);
//	}
//	return 0;
//}

//int main(void){
//	int a,b,c,d, min_1, min_2, max_1, max_2;
//	printf("Enter 4 integer:");
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	
//	if (a>b){
//		min_1 = b;
//		max_1 = a;
//	} else{
//		min_1 = a;
//		max_1 = b;
//	}
//	
//	if (c>d){
//		min_2 = d;
//		max_2 = c;
//	} else{
//		min_2 = c;
//		max_2 = d;
//	}
//	
//	max_1 > max_2 ? printf("Max is %d\n", max_1) : printf("Max is %d\n", max_2);
//	min_1 > min_2 ? printf("Min is %d\n", min_2) : printf("Min is %d\n", min_1);
//}


//int main(void){
//	int h1=8, h2=9, h3=11, h4=12, h5=14, h6=15, h7=19, h8=21;
//	int m1=0, m2=43, m3=19, m4=47, m5=0, m6=45, m7=0, m8=45;
//	int t1=h1*60+m1, t2=h2*60+m2, t3=h3*60+m3, t4=h4*60+m4; 
//	int t5=h5*60+m5, t6=h6*60+m6, t7=h7*60+m7, t8=h8*60+m8; 
//	int ah1=10, ah2=11, ah3=13, ah4=15, ah5=16, ah6=17, ah7=21, ah8=23;
//	int am1=16, am2=52, am3=31, am4=0, am5=8, am6=55, am7=20, am8=58;
//	int hour, min, time;
//	int d1, d2, d3, d4, d5, d6, d7, d8, d9;
//	printf("Enter a 24-hour time:");
//	scanf("%d:%d", &hour, &min);
//	
//	time = 60 * hour + min;
//	d1 = time - t1;
//	d1 = d1>0?d1:-d1;
//	d2 = time - t2;
//	d2 = d2>0?d2:-d2;
//	d3 = time - t3;
//	d3 = d3>0?d3:-d3;
//	d4 = time - t4;
//	d4 = d4>0?d4:-d4;
//	d5 = time - t5;
//	d5 = d5>0?d5:-d5;
//	d6 = time - t6;
//	d6 = d6>0?d6:-d6;
//	d7 = time - t7;
//	d7 = d7>0?d7:-d7;
//	d8 = time - t8;
//	d8 = d8>0?d8:-d8;
//	
//	if (d1 < d2){
//		d2 = d1;
//		h2 = h1;
//		m2 = m1;
//		ah2 = ah1;
//		am2 = am1;
//	}
//	
//	if (d2 < d3){
//		d3 = d2;
//		h3 = h2;
//		m3 = m2;
//		ah3 = ah2;
//		am3 = am2;
//	}
//	
//	if (d3 < d4){
//		d4 = d3;
//		h4 = h3;
//		m4 = m3;
//		ah4 = ah3;
//		am4 = am3;
//	}
//	
//	if (d4 < d5){
//		d5 = d4;
//		h5 = h4;
//		m5 = m4;
//		ah5 = ah4;
//		am5 = am4;
//	}
//	
//	
//	if (d5 < d6){
//		d6 = d5;
//		h6 = h5;
//		m6 = m5;
//		ah6 = ah5;
//		am6 = am5;
//	}
//	
//	if (d6 < d7){
//		d7 = d6;
//		h7 = h6;
//		m7 = m6;
//		ah7 = ah6;
//		am7 = am6;
//	}
//	
//	if (d7 < d8){
//		d8 = d7;
//		h8 = h7;
//		m8 = m7;
//		ah8 = ah7;
//		am8 = am7;
//	}
//	
//	
//	if (h8 < 12){
//		printf("Closest depature time is %d:%d AM, ", h8, m8);
//	} else if (h8==12 && m8==0){
//		printf("Closest depature time is %d:%d AM, ", h8, m8);
//	} else {
//		printf("Closest depature time is %d:%d PM, ", h8-12, m8);
//	}
//	
//	if (ah8 < 12){
//		printf("arriving at %d:%d AM \n", ah8, am8);
//	} else if (ah8==12 && am8==0){
//		printf("arriving at %d:%d AM \n", ah8, am8);
//	} else {
//		printf("arriving at %d:%d PM \n", ah8-12, am8);
//	}
//}

//int main(void){
//	int d1, m1, y1, y11, y12;
//	int d2, m2, y2, y21, y22;
//	printf("Enter the first date (mm/dd/yy):");
//	scanf("%d/%d/%1d%1d", &m1, &d1, &y11, &y12);
//	printf("Enter the second date (mm/dd/yy):");
//	scanf("%d/%d/%1d%1d", &m2, &d2, &y21, &y22);
//	y1 = 10 * y11 + y12;
//	y2 = 10 * y21 + y22;
//	if (y1 < y2){
//		printf("%d/%d/%1d%1d is ealier than %d/%d/%1d%1d!", m1,d1,y11,y12,m2,d2,y21,y22);
//	}else if(y1 == y2){
//		if (m1 < m2){
//			printf("%d/%d/%1d%1d is ealier than %d/%d/%1d%1d!", m1,d1,y11,y12,m2,d2,y21,y22);
//		} else if (m1==m2){
//			if (d1<d2){
//				printf("%d/%d/%1d%1d is ealier than %d/%d/%1d%1d!", m1,d1,y11,y12,m2,d2,y21,y22);
//			} else {
//				printf("%d/%d/%1d%1d is ealier than %d/%d/%1d%1d!", m2,d2,y21,y22, m1,d1,y11,y12);
//			}
//		} else {
//			printf("%d/%d/%1d%1d is ealier than %d/%d/%1d%1d!", m2,d2,y21,y22, m1,d1,y11,y12);
//		}
//	} else {
//		printf("%d/%d/%1d%1d is ealier than %d/%d/%1d%1d!", m2,d2,y21,y22, m1,d1,y11,y12);
//	}
//	return 0;
//}

//int main(void){
//	int number;
//	printf("Enter numerical grade:");
//	scanf("%d", &number);
//	switch (number/10){
//		case 10: case 9: printf("A");break;
//		case 8: printf("B");break;
//		case 7: printf("C");break;
//		case 6: printf("D");break;
//		case 5: case 4: case 3: case 2: case 1: case 0:printf("F");break;
//		default: printf("Wrong!");
//	}
//	return 0;
//}

int main(void){
	int a,b;
	printf("Enter a two-digits number:");
	scanf("%1d%1d", &a, &b);
	if (a==1){
		switch (b){
			case 9: printf("nineteen");break;
			case 8: printf("eighteen");break;
			case 7: printf("seventeen");break;
			case 6: printf("sixteen");break;
			case 5: printf("fifteen");break;
			case 4: printf("fourteen");break;
			case 3: printf("thirteen");break;
			case 2: printf("twelve");break;
			case 1: printf("eleven");break;
		}
	} else{
		switch (a){
			case 9: printf("ninety-");break;
			case 8: printf("eighty-");break;
			case 7: printf("seventy-");break;
			case 6: printf("sixty-");break;
			case 5: printf("fifty-");break;
			case 4: printf("forty-");break;
			case 3: printf("thirty-");break;
			case 2: printf("tweenty-");break;
		}
		switch (b){
			case 9: printf("nine");break;
			case 8: printf("eight");break;
			case 7: printf("seven");break;
			case 6: printf("six");break;
			case 5: printf("five");break;
			case 4: printf("four");break;
			case 3: printf("three");break;
			case 2: printf("two");break;
			case 1: printf("one");break;
		}
	}
	return 0;
}

