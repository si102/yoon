#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//실습2 사칙연산 계산기 
int main(int argc, char *argv[]) {
	int f; //first integer 
	int s; // second integer
	
	printf("Input two integers: ");
	scanf("%i %i",&f,&s); //scanf를 통해 두개의 정수 입력받음 
	
	printf("+ result is %i\n",f+s); //printf를 통해 연산 결과값 출력 
	printf("- result is %i\n",f-s);
	printf("* result is %i\n",f*s);
	printf("/ result is %i\n",f/s);
	printf("%% result is %i\n",f%s); //%문자 출력시 %% 이용 
	
	return 0;
}

