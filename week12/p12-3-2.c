#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�3] �����Ϳ� �Լ�
//call by reference
void swap(int*x,int*y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void main(void){
	int a=3;
	int b=5;
	swap(&a,&b);
	printf("a:%i,b:%i\n",a,b);
}
// a=5,b=3