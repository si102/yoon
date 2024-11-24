#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습6-1] 파일 한 글자씩 읽어와서 내용 출력 
int main(void){
	FILE*fp=NULL;
	char word[100];
	
	fp=fopen("sample.txt","r");
	if(fp==NULL){
		printf("파일을 못 열음\n");
		return 1; //열기 실패하면 프로그램 종료, 비정상 종료 나타냄  
	}
	while(fgets(word,sizeof(word),fp)!=NULL){
		printf("%s",word);
	}
	fclose(fp);
	
	return 0;
}
