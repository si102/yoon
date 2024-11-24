#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습6-1] 파일 한 글자씩 읽어와서 내용 출력 
void main(void){
	FILE*fp=NULL;
	char c;
	
	fp=fopen("sample.txt","r");
	if(fp==NULL){
		printf("파일을 못 열음\n");
		return; //열기 시패하면 프로그램 종료 
	}
	while((c=fgetc(fp))!=EOF){
		putchar(c);
	}
	fclose(fp);
}
