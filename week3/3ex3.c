#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//�ǽ�3 ���ĺ� �� ���� ���: ����-�ش� �ƽ�Ű-''�ƽ�Ű+1-�ش� ���� 
int main(int argc, char *argv[]) {
	char c; //�Է¹��� ���ĺ� ǥ���ϴ� ���� 
	char d;
	
	printf("enter a character:");
	scanf("%c",&c); //scanf ���->�Է¹��� ���� ���ڷ� ����, %c->���� ����(?), &c->���� ���(?) 
	
	d=c+1;

	printf("the next character of %c (%i) is %c (%i)",c,c,d,d); //%c(%i)�� c,c-> ����c(�ƽ�Ű ���� c)/''�� c+1,c+1 -> ����c+1(�ƽ�Ű'c+1')  
	return 0;
}


/*1.''
2.'' ������
3.''+1
4.'' ���� */
