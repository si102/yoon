#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y;
	int value1, value2, value3;
	
	printf("Input the year: ");
	scanf("%i",&y);
	
	value1 = y%4==0;
	value2 = y%100!=0;
	value3 = y%400==0;
	
	printf("Is the year %i the leap year? %d",y,value1&&value2||value3); //printf 이용해서 논리연산자 계산 
	
	return 0;
}
