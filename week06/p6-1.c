#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�1] ���/���� �Ǵ� 
int main(int argc, char *argv[]) {
	int i; //�Է¹��� ����
	
	printf("Enter an integer: "); 
	scanf("%i",&i); //scanf�� �̿��Ͽ� �ϳ��� ���� �Է¹��� 
	
	if(i>0) //����1 �Ǵ� 
	{printf("This is positive number.");}
	else if(i<0) //����2 �Ǵ� 
	{printf("This is negative number.");}
	else //��� �������� ���� ��� 
	{printf("This is 0.");}
		
	return 0;
}
