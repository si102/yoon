#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//실습3 알파벳 상 문자 출력 
int main(int argc, char *argv[]) {
	char alp; //입력받을 알파벳 표현하는 변수 
	char next;
	
	printf("enter a character:");
	scanf("%c",&alp); //scanf 사용->입력받은 값을 문자로 저장, %c->저장 형태, &alp->저장 장소(?) 
	
	next=alp+1; //입력받은 값 다음 알파벳 
	
	printf("the next character of %c (%i) is %c (%i)",alp,alp,next,next);  
	return 0;
}

