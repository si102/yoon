#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*실습4 나누기 프로그램 만들기*/ 
int main(int argc, char *argv[]) {
	char c;
	char d;
	int i;
	int j;
	
	printf("enter number: ");
	scanf("%c",&c);
	
	printf("enter number: ");
	scanf("%c",&d);
	
	i=c;
	j=d;
	
	printf("%c,%c",c,d);
	
	return 0;
}
