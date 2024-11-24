#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	float a;
	float b;
	float division;
	
	printf("enter two integers: ");
	scanf("%f,%f",&a,&b); 
	
	division=a/b;
		
	printf("%.6f / %.6f = %.6f",a,b,division);
	
	return 0;
}
