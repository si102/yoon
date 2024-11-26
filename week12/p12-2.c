#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습2] 간접 참조 연산자 
void main(void){
	int i=300; //int i=4; 
	
	int*pi=&i;
	char*pc=&i;
	
	printf("%i,%i,%i\n",i,*pi,*pc);
}
//if) int i=4: 4,4,4
//if) i=300: 300,300,44 
//차이 이유: type별 byte크기가 달라서 
