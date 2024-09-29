#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*실습4 나누기 프로그램 만들기*/ 
int main(int argc, char *argv[]) {
	float a; //부동소수점 변수를 위한 float 형식 
	float b;
	float division;
	
	printf("enter two integers: ");
	scanf("%f,%f",&a,&b); 
	
	division=a/b;
		
	printf("%.6f / %.6f = %.6f",a,b,division); //부동소수점으로 출력 표현 
	
	return 0;
}
