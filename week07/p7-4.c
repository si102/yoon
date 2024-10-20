#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습4] Combination 프로그램 

int factorial(int num){ //factorial 계산 함수 선언 
	int res=1;
	int i;
	for(i=1; i<=num;i++){
		res*=i;
	}
	return res;
}

int combination(int n, int r){ //combination 계산 함수 선언
	int result;
	int n_r= n-r;
	result= factorial(n)/( factorial(n_r) * factorial(r) );
	return result;
}

int get_integer(){ //정수입력 함수선언 
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
//n-r<0인 경우 고려하기. 
