#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//실습4 윤년 계산
// 변수를 이용하여 계산, printf를 이용하여 값 출력 
int main(int argc, char *argv[]) {
	int year; //입력받을 년도 저장 변수 
	int value;  
	
	printf("Input the year: ");
	scanf("%i",&year); //정수로 입력된 년도 
	value = (year%4==0 && year%100!=0 || year%400==0); //연산 순서:단항(!)->산술(%)->논리(&&)->||(논리) 
	
	printf("Is the year %i the leap year? %d",year,value);
	
	return 0;
}
/* 변수를 이용하여 조건, printf 이용하여 계산 
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
*/
