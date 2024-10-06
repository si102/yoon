#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int b;
	
	printf("Input two integers: ");
	scanf("%i %i",&a,&b);
	
	printf("& result is %i\n| result is %i\n^ result is %i\n<<1 result is %i\n>>1 result is %i",b&a,b|a,b^a,a<<1,a>>1);
	return 0;
	// a<<1: a의 비트를 왼쪽으로 1칸 이동 => 결과적으로 a의 값을 2배로 만듦
	// a>>1: a의 비트를 오른쪽으로 1칸 이동 => 결과적으로 a의 값을 2로 나눈 것과 같음 
	 
}
 
