#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습7] 이중 포인터의 활용

char *proverb="All that glisters is not gold."; //proverb=""
void setPointer(char **q){
	*q=proverb; 
} 
int main(void){ 
	char *p="zzz"; 
	setPointer(&p); 
	printf("%s \n",p);
	
	return 0;
}

/*
char *proverb="All that glisters is not gold."; 
void setPointer(char *q){
	q=proverb; 
} 
int main(void){ //setPonter함수 내에서 바꿔도 main에서 p포인터 변경 안 함  
	char *p="zzz"; 
	setPointer(p); //p*=proverb
	printf("%s \n",p);
	
	return 0;
} */
//zzz
