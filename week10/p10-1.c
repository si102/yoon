#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�1]�迭�� Ȱ�� 
int main(void)
{
	int i;
	int grade[5]; //�迭 ���� 
	
	grade[0]=10; //�迭 
	grade[1]=20;
	grade[2]=30;
	grade[3]=40;
	grade[4]=50;
	for(i=0;i<5;i++)
		printf("grade[%d]=%d\n",i,grade[i]); //�迭 �� ��� 
		
	return 0;
}
