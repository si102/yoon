#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�2] ���� ���� ������ 
void main(void){
	int i=300; //int i=4; 
	
	int*pi=&i;
	char*pc=&i;
	
	printf("%i,%i,%i\n",i,*pi,*pc);
}
//if) int i=4: 4,4,4
//if) i=300: 300,300,44 
//���� ����: type�� byteũ�Ⱑ �޶� 
