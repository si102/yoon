#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�4] ���� ���α׷� 
int main(int argc, char *argv[]) {
	int sum=0; //���ϱ� �����ϴ� ���� ����, 0���� �ʱ�ȭ
	int num; //�Է¹��� ���� ���� ���� 
	int i;
	 
	printf("Enter a number: ");
	scanf("%i",&num);
	
	//for�� ���� for(�ʱ��;���ǽ�;������) 
	for(i=0;i<=num;i++){ 
		sum=sum+i; //sum += i  
	} //i=0: i�ʱ� ��0, i=num���� ����, i�� ���� 1�� �ø� 
	
	printf("%i",sum);
	return 0;
}

