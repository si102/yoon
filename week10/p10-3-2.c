#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습3-2] 서로 다른 값을 가진 index 출력 
int main(int argc, char *argv[]) {
	int i;
	int a[SIZE]={1,2,3,4,5};
	int b[SIZE]={1,2,3,7,10};
	int flag_same=1;
	
	for (i=0;i<SIZE;i++){
		if(a[i]!=b[i]){
			flag_same=0;
			printf("서로 다른 값을 가진 index :%d\n",i);
		}
	}
 
	return 0;
	}
