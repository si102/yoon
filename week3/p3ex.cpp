#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//�ǽ�3 ���ĺ� �� ���� ��� �ϴ� ���ĺ� �Է��ϸ� ���ĺ��� �� �� ��� 
int main(int argc, char *argv[]) {
	char c; //���� ���� 
	int i;
	char d;
	int e;
	printf("enter a character:");
	scanf("%c",&c); //scanf ��� �Է¹��� ���� ���ڷ� ����(?)
	
	i=c;
	d=c+1;
	e=d;
	
	printf("the character is %c (%i) %d (%e)",c,i,d,e);
	return 0;
}
