#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// [실습3] Call by Value 
/*
void square (int a){
	a=a*a;
}
int main(){
	int a=2;
	square(a);
	printf("a=%i\n",a);
}
첫번쨰 코드 실행결과: a=2 */

int square( int a){
	return(a*a);
}
int main(){
	int a = 2;
	a=square(a);
	printf("a=%i\n",a);
}
//두번째 코드 실행결과: a=4
//이유: return의 유무 
