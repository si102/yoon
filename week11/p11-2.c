#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�2]���ڿ� ��� 
/*int main(void) {
	int i=0;
	char str[4];
	str[0]='a';
	str[1]='b';
	str[2]='c';
	str[3]='\0';
	printf("%s\n",str); //���ڿ� ��¹��1 
}*/
//abc

int main(void){
	int i=0; //����i �ʱ�ȭ 
	char str[4]; //���� �迭 str ũ��:4 
	str[0]='a';
	str[1]='b';
	str[2]='c';
	str[3]='\0'; // ���ڹ迭 ���� ���� 
	
	while(str[i]!='\0'){ //���ڿ� ��¹��2 
		printf("%c",str[i]); //str[i]�� ����� ���� 
		i++;
	}
}
//abc
