#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//실습3 알파벳 상 문자 출력: 문자-해당 아스키-''아스키+1-해당 문자 
int main(int argc, char *argv[]) {
	char c; //입력받을 알파벳 표현하는 변수 
	char d;
	
	printf("enter a character:");
	scanf("%c",&c); //scanf 사용->입력받은 값을 문자로 저장, %c->저장 형태(?), &c->저장 장소(?) 
	
	d=c+1;

	printf("the next character of %c (%i) is %c (%i)",c,c,d,d); //%c(%i)랑 c,c-> 문자c(아스키 숫자 c)/''랑 c+1,c+1 -> 문자c+1(아스키'c+1')  
	return 0;
}


/*1.''
2.'' 정수형
3.''+1
4.'' 문자 */
