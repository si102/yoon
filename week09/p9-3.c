#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습3] Global variable(전역 변수)
void f(void);

int i;
int main(void)
{
	for(i=0;i<5;i++) // 5<10 이므로 루프 1회 후 종료 
	{
		f(); //f를 5번 호출 
	}
	return 0;	
}

void f(void)
{
	for(i=0;i<10;i++) //최종적으로 i=10 
		printf("#");
}
//예상: #연달아 50개
//결과: ########## 이유- 변수가 같아서 
