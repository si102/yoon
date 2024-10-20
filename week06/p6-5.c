#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// [실습5] 산술계산기 
int main(int argc, char *argv[]) {
	int first; //처음 정수 변수 
	int second; //나중 정수 변수 
	char cal; //산술자 변수
	int result;
	printf("Enter the calculation: ");
	scanf("%i %c %i",&first, &cal, &second); 
	
/*	if(cal=='+'){
		result=first+second;
	}
	else if(cal=='-'){
		result=first-second;
	}
	else if(cal=='/'){
		result=first/second;
	}
	else{
		result=first*second;
	}*/
	
	switch(cal){
		case '+': //덧셈 연산자 + 
			result=first+second;
			break;
		case '-': //뺄셈 연산자 - 
			result=first-second;
			break;
		case '/': //나눗셈 연산자 / 
			result=first/second;
			break;
		case '*': //곱셈 연산자 *
			result=first*second;
			break; 
	}
	printf("=%i",result); 
	return 0;
}
