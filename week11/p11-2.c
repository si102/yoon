#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습2]문자열 출력 
/*int main(void) {
	int i=0;
	char str[4];
	str[0]='a';
	str[1]='b';
	str[2]='c';
	str[3]='\0';
	printf("%s\n",str); //문자열 출력방식1 
}*/
//abc

int main(void){
	int i=0; //변수i 초기화 
	char str[4]; //문자 배열 str 크기:4 
	str[0]='a';
	str[1]='b';
	str[2]='c';
	str[3]='\0'; // 문자배열 종료 문자 
	
	while(str[i]!='\0'){ //문자열 출력방식2 
		printf("%c",str[i]); //str[i]에 저장된 문자 
		i++;
	}
}
//abc
