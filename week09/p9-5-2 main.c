#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습 5-2]Global variable의 연결 제한 
static int all_files;

extern void sub();
 
int main(void) 
{
	sub();
	printf("%d\n",all_files);
	return 0;
}
//static 넣었을 때 오류발생 
