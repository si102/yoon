#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*�ǽ�4 ������ ���α׷� �����*/ 
int main(int argc, char *argv[]) {
	float a; //�ε��Ҽ��� ������ ���� float ���� 
	float b;
	float division;
	
	printf("enter two integers: ");
	scanf("%f,%f",&a,&b); 
	
	division=a/b;
		
	printf("%.6f / %.6f = %.6f",a,b,division); //�ε��Ҽ������� ��� ǥ�� 
	
	return 0;
}
