#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습2] Local variable(지역변수)
int main(void) {
	int i;
	
	for(i=0;i<5;i++)
	{
		int temp=1;
		printf("temp = %d\n",temp);
		temp++;
	}
	return 0;
}
// temp=1이 줄바꿔 5번 출력될 듯 
