#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//�ǽ�3 ������/������ ������ 
int main(int argc, char *argv[]) {
	int input_s;  //�Է¹��� ���� 
	int minute; //���� ��Ÿ�� ���� 
	int second; //�ʸ� ��Ÿ�� ���� 
	
	printf("Input the second: "); 
	scanf("%i",&input_s); //scanf�� ���� �Է� ���� 
	
	minute=input_s/60; //�� ǥ�� 
	second=input_s%60; //�� ǥ�� 
	
	printf("The time is %i : %i",minute,second); //int i; �� ���  
//	printf("The time is %i : %i",i/60,i%60); printf�� ���ؼ� ���� ����� ��� 
	
	return 0;
	
}
