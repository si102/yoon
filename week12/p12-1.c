#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�1] ������ �� 
int main(void) {
	int i=10;
	char c='a';
	
	int *iptr; //������ ������ ���� ���� 
	iptr=&i; //iptr�� i�� ����Ű�� �� 
	char*cptr; //������ ������ ���� ���� 
	cptr=&c; //cptr�� c�� ����Ű�� �� 
	int*iptr2; 
	iptr2=iptr; //iptr2�� iptr�� ����Ű�� ���� �����ϰ� ����Ű�� ��  
	
	printf("i: %p\n%p (size:%i)\n",iptr,&i,sizeof(iptr));
	printf("c: %p\n%p (size:%i)\n",cptr,&c,sizeof(cptr));
	printf("iptr2: %p, %i\n",iptr2,*iptr);
	return 0;
}
