#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습5] 포인터 증가 연산 
int main(void){
	char *pc;
	int *pi;
	double *pd;
	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;
	
	printf("증가 전: pc=%d, pi=%d, pd=%d\n",pc,pi,pd);
	
	pc++;
	pi++;
	pd++;
	printf("증가 후: pc=%d, pi=%d, pd=%d\n",pc,pi,pd);
	
	return 0; 
}
//증가 전: pc=10000, pi=10000, pd=10000
//증가 후: pc=10001, pi=10004, pd=10008
