#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// [�ǽ�5] ������� 
int main(int argc, char *argv[]) {
	int first; //ó�� ���� ���� 
	int second; //���� ���� ���� 
	char cal; //����� ����
	int result;
	printf("Enter the calculation: ");
	scanf("%i %c %i",&first, &cal, &second); 
	
/*	if(cal=='+'){
		result=first+second;
	}
	else if(cal=='-'){
		result=first-second;
	}
	else if(cal=='/'){
		result=first/second;
	}
	else{
		result=first*second;
	}*/
	
	switch(cal){
		case '+': //���� ������ + 
			result=first+second;
			break;
		case '-': //���� ������ - 
			result=first-second;
			break;
		case '/': //������ ������ / 
			result=first/second;
			break;
		case '*': //���� ������ *
			result=first*second;
			break; 
	}
	printf("=%i",result); 
	return 0;
}
