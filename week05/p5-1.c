#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//실습1 산술 연산자 활용 
int main(int argc, char *argv[]) {
	int x,y,z,m;
	int a,b,c;
	x=2;
	z=1;
	a=3;
	b=4;
	c=5;
	
	y=a*x*x + b*x + c; //b*x(o) bx(x)
	m=(x+y+z)/3;
	
	printf("y=%d, m=%d",y,m);
	
	return 0;
}

