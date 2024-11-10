#include <stdio.h>
#include <stdlib.h>
#define SIZE 4 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습4] 배열과 매개변수 
void square_array(int a[],int size);
void print_array(int a[], int size);

int main(void){
	int list[SIZE]={1,2,3,4};
	
	print_array(list,SIZE);
	square_array(list,SIZE); //a[i] 값 바뀜 
	print_array(list,SIZE); // 제곱된 값 출력 
	
	return 0;
} 

void square_array(int a[],int size){
	int i;
	
	for (i=0;i<size;i++)
		a[i]=a[i]*a[i];
}

void print_array(int a[], int size){
	int i;
	
	for (i=0;i<size;i++)
		printf("%3d",a[i]);
	printf("\n");
}
/* 출력 값 
 1 2 3 4
 1 4 9 16 */

