#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//�ǽ�2 ��Ģ���� ���� 
int main(int argc, char *argv[]) {
	int f; //first integer 
	int s; // second integer
	
	printf("Input two integers: ");
	scanf("%i %i",&f,&s); //scanf�� ���� �ΰ��� ���� �Է¹��� 
	
	printf("+ result is %i\n",f+s); //printf�� ���� ���� ����� ��� 
	printf("- result is %i\n",f-s);
	printf("* result is %i\n",f*s);
	printf("/ result is %i\n",f/s);
	printf("%% result is %i\n",f%s); //%���� ��½� %% �̿� 
	
	return 0;
}

