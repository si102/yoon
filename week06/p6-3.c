#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�4] ���� ���� ���� 
int main(int argc, char *argv[]) {
	int num=0; //���� ���� ���� ���� ����, �ʱⰪ0���� ���� 
	char c; //�Է¹��� ���� 1�� 
	
	printf("Input a string: "); //while�� �ڿ�;�� ������ ���� ���� 
	while((c=getchar()) !='\n'){
		if(c>47 && c<58){
			num++; // num=num+1 �ᵵ ��	
		}
	}
	
	printf("The number of digits is %i",num);
	return 0;
}
//getchar(): �Է¿��� �� ���ھ� �о��, c:�о�� ���� ����,  !='\n': �ٹٲ� ������ 
