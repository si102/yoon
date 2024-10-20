#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습1] 함수화 하기 
/*int main(void)
{
	int i;
	
	for(i=0; i<10; i++)
		printf("*");
	for(i=0; i<10; i++)
		printf("*");
	for(i=0; i<10; i++)
		printf("*");
	
	return 0;
}*/
void print_star() //void:함수반환 타입 나타냄, print_star:함수이름, ():매개변수 목록 현재=공란 
{
	int i;
	for(i=0; i<10; i++) //0부터 9까지 10번 실행 
	printf("*");
}

int main(void)
{
	print_star(); //*10개 
	print_star(); // ''
	print_star(); // ''
	

	return 0; //void 함수라 꼭 return이 필요하지는 않음. 
}
