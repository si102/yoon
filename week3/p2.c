#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c; //���ڸ� �����ϴ� ���� c���� 
	int i; // ������ �����ϴ� ���� i���� 
	
	printf("input a number:"); //���� �Ǵ� ���� �Է¹��� 
	scanf("%c",&c); //����ڰ� �Է��� �� ���ڸ� c��� ������ ���� 
	
	// i=c; :�Է���i�� �ƽ�Ű �ڵ忡 �ش��ϴ� ���� ����
	i=c-'0'; //���� c�� ������ ��ȯ�ϴ� ���(ex c=5/'5' - '0' = 5) 
	printf("The input number is %i\n",i); //i�� ����ϴ� �ڵ�, ""�ȿ��� ���� 
	return 0;
}
