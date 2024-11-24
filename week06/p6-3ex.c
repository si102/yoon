#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	char c;
	
	printf("two integer: ");
	scanf("%c %c",&i,&c); //c로 읽으면 아스키로 읽힘, i로 읽으면 숫자 그 다체로 읽힘 
	
	printf("%c, %c",i,c);
	return 0;
}
