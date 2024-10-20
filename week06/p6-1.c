#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습1] 양수/음수 판단 
int main(int argc, char *argv[]) {
	int i; //입력받을 변수
	
	printf("Enter an integer: "); 
	scanf("%i",&i); //scanf를 이용하여 하나의 정수 입력받음 
	
	if(i>0) //조건1 판단 
	{printf("This is positive number.");}
	else if(i<0) //조건2 판단 
	{printf("This is negative number.");}
	else //모두 만족하지 않을 경우 
	{printf("This is 0.");}
		
	return 0;
}
