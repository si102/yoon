#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�3] Global variable(���� ����)
void f(void);

int i;
int main(void)
{
	for(i=0;i<5;i++) // 5<10 �̹Ƿ� ���� 1ȸ �� ���� 
	{
		f(); //f�� 5�� ȣ�� 
	}
	return 0;	
}

void f(void)
{
	for(i=0;i<10;i++) //���������� i=10 
		printf("#");
}
//����: #���޾� 50��
//���: ########## ����- ������ ���Ƽ� 
