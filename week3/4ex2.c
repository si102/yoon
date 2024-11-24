#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a;
	int b;
	float divi;
	
	printf("enter two integers: ");
	scanf("%d,%d",&a,&b); 
	
	divi=(float)a/(float)b;
	
	printf("%.6f / %.6f = %.6f",(float)a,(float)b,divi);
	
	return 0;
}
