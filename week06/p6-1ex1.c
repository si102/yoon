#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i; //�Է¹��� ����
	char* result;
	
	printf("Enter an integer: "); 
	scanf("%i",&i); //scanf�� �̿��Ͽ� �ϳ��� ���� �Է¹��� 
	 
	if(i>0) //����1 �Ǵ� 
	{result=="positive number";} 
	else if(i<0) //����2 �Ǵ� 
	{result=="negative number";}
	else //��� �������� ���� ��� 
	{result=="0";}
	printf("This is %c.",result);
	return 0;
}
//Q ���ڿ����� '," ���� ':ª�� ���ڿ��� ���, ":�� ���ڿ��� ��� 
//Q char: ���� ���� ���� ������, char*: ���ڿ� ���� 
