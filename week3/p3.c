#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//�ǽ�3 ���ĺ� �� ���� ��� 
int main(int argc, char *argv[]) {
	char alp; //�Է¹��� ���ĺ� ǥ���ϴ� ���� 
	char next;
	
	printf("enter a character:");
	scanf("%c",&alp); //scanf ���->�Է¹��� ���� ���ڷ� ����, %c->���� ����, &alp->���� ���(?) 
	
	next=alp+1; //�Է¹��� �� ���� ���ĺ� 
	
	printf("the next character of %c (%i) is %c (%i)",alp,alp,next,next);  
	return 0;
}

