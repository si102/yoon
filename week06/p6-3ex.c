#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	char c;
	
	printf("two integer: ");
	scanf("%c %c",&i,&c); //c�� ������ �ƽ�Ű�� ����, i�� ������ ���� �� ��ü�� ���� 
	
	printf("%c, %c",i,c);
	return 0;
}
