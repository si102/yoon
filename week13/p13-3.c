#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습3] 구조체 배열 활용
struct student{
	int ID;
	int score;
}; 

void main(void){
	struct student s[STUDENTNUM];
	int i;
	int sum=0;
	float average=0;
	struct student max=s[0];
	
	for(i=0;i<STUDENTNUM;i++){ //배열 입력받기 
		printf("Input the ID: ");
		scanf("%d",&s[i].ID);
		printf("Input the score: ");
		scanf("%d",&s[i].score);
	}
	
	for(i=0;i<STUDENTNUM;i++){ //배열 평균값  구하기 
		sum+= s[i].score;
	}
	average=(float)sum/STUDENTNUM;
	
	for(i=0;i<STUDENTNUM;i++){ //배열 최댓값 구하기 
		if(s[i].score>max.score){
			max=s[i];
		}
	} 
	
	printf("The average of the score: %.6f\n",average);
	printf("The highest score - ID: %d, score: %d",max.ID,max.score);
	
}
