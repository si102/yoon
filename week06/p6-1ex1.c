#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i; //입력받을 변수
	char* result;
	
	printf("Enter an integer: "); 
	scanf("%i",&i); //scanf를 이용하여 하나의 정수 입력받음 
	 
	if(i>0) //조건1 판단 
	{result=="positive number";} 
	else if(i<0) //조건2 판단 
	{result=="negative number";}
	else //모두 만족하지 않을 경우 
	{result=="0";}
	printf("This is %c.",result);
	return 0;
}
//Q 문자열에서 '," 차이 ':짧은 문자열에 사용, ":긴 문자열에 사용 
//Q char: 단일 문자 저장 데이터, char*: 문자열 저장 
