#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�4] Combination ���α׷� 

int factorial(int num){ //factorial ��� �Լ� ���� 
	int res=1;
	int i;
	for(i=1; i<=num;i++){
		res*=i;
	}
	return res;
}

int combination(int n, int r){ //combination ��� �Լ� ����
	int result;
	int n_r= n-r;
	result= factorial(n)/( factorial(n_r) * factorial(r) );
	return result;
}

int get_integer(){ //�����Է� �Լ����� 
	int num;
	printf("Enter the value: ");
	scanf("%i",&num);
	return num;
}
int main(int argc, char *argv[]) {
	int nn, rr, nn_rr;
	int value;
	nn= get_integer();
	rr= get_integer();
	
	value= combination(nn,rr);
	printf("The result of C(%i,%i) is %i",nn,rr,value);
	return 0;
}
//n-r<0�� ��� ����ϱ�. 
