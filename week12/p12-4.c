#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습4] 배열의 활용
int main(void){
	int i;
	int grade[5];
	int*ptr=grade;
	int sum=0;
	int aver;
	
	for(i=0;i<5;i++){
		printf("Input value - grade[%i] = ",i);
		scanf("%d",&grade[i]);
	}
	
	for(i=0;i<5;i++){
		sum+=*(ptr+i);
		printf("grade[%i] = %i\n",i,*(ptr+i));
	}
	
	aver=sum/5;
	printf("average: %d",aver);
	
	return 0;
} 
