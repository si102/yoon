#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//실습3 알파벳 상 문자 출력 일단 알파벳 입력하면 알파벳과 그 수 출력 
int main(int argc, char *argv[]) {
	char c; //변수 선언 
	int i;
	char d;
	int e;
	printf("enter a character:");
	scanf("%c",&c); //scanf 사용 입력받은 값을 문자로 저장(?)
	
	i=c;
	d=c+1;
	e=d;
	
	printf("the character is %c (%i) %d (%e)",c,i,d,e);
	return 0;
}
