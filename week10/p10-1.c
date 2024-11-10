#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습1]배열의 활용 
int main(void)
{
	int i;
	int grade[5]; //배열 선언 
	
	grade[0]=10; //배열 
	grade[1]=20;
	grade[2]=30;
	grade[3]=40;
	grade[4]=50;
	for(i=0;i<5;i++)
		printf("grade[%d]=%d\n",i,grade[i]); //배열 값 출력 
		
	return 0;
}
