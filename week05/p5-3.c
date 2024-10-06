#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//실습3 나누기/나머지 연산자 
int main(int argc, char *argv[]) {
	int input_s;  //입력받을 변수 
	int minute; //분을 나타낼 변수 
	int second; //초를 나타낼 변수 
	
	printf("Input the second: "); 
	scanf("%i",&input_s); //scanf를 통해 입력 받음 
	
	minute=input_s/60; //분 표현 
	second=input_s%60; //초 표현 
	
	printf("The time is %i : %i",minute,second); //int i; 인 경우  
//	printf("The time is %i : %i",i/60,i%60); printf를 통해서 연산 결과값 출력 
	
	return 0;
	
}
