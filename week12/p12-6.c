#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습6] 이중 포인터
int main(void){
	int i=100;
	int*p=&i;
	int**q=&p;
	
	*p=200;
	printf("i=%d, *p=%d, **q=%d\n",i,*p,**q);
	
	**q=300;
	printf("i=%d, *p=%d, **q=%d\n",i,*p,**q);
	
	return 0;
} 
/* i=200, *p=200, **q=200
   i=300, *p=300, **q=300 */
