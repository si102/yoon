#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�6] ���� ���߱� ���� 
int main(int argc, char *argv[]) {
	int answer=50; //���� ���� ���� ���� ���� 
	int input;
	int try=0;
	
	do{
		printf("Guess a number: ");
		scanf("%i",&input);
		try=try+1; //try++
		if(input<answer){
			printf("Low!\n");
		}
		else if(input>answer){
			printf("High!\n");
		}
	}while (input!=answer);
	
	printf("Congratulation! Trials: %i",try);
	return 0;
}
//do-while���� while�� ���� 
