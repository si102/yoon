#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�1] �Լ�ȭ �ϱ� 
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
void print_star() //void:�Լ���ȯ Ÿ�� ��Ÿ��, print_star:�Լ��̸�, ():�Ű����� ��� ����=���� 
{
	int i;
	for(i=0; i<10; i++) //0���� 9���� 10�� ���� 
	printf("*");
}

int main(void)
{
	print_star(); //*10�� 
	print_star(); // ''
	print_star(); // ''
	

	return 0; //void �Լ��� �� return�� �ʿ������� ����. 
}
