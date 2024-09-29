#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c; //문자를 저장하는 변수 c선언 
	int i; // 정수를 저장하는 변수 i선언 
	
	printf("input a number:"); //숫자 또는 문자 입력받음 
	scanf("%c",&c); //사용자가 입력한 한 문자를 c라는 변수에 저장 
	
	// i=c; :입력한i의 아스키 코드에 해당하는 문자 나옴
	i=c-'0'; //문자 c를 정수로 변환하는 방법(ex c=5/'5' - '0' = 5) 
	printf("The input number is %i\n",i); //i를 출력하는 코드, ""안에는 문장 
	return 0;
}
