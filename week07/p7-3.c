#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// [�ǽ�3] Call by Value 
/*
void square (int a){
	a=a*a;
}
int main(){
	int a=2;
	square(a);
	printf("a=%i\n",a);
}
ù���� �ڵ� ������: a=2 */

int square( int a){
	return(a*a);
}
int main(){
	int a = 2;
	a=square(a);
	printf("a=%i\n",a);
}
//�ι�° �ڵ� ������: a=4
//����: return�� ���� 
