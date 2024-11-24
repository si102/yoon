#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습5] 입력 받은 단어를 파일로 출력 
void main(void){
	FILE*fp=NULL;
	int i;
	char word[100]; //문자열은 배열 또는 포인터로만 변수선언 가능 
	
	fp=fopen("sample.txt","w"); //w로 열면 존재하지 않은 파일도 가능 
	if(fp==NULL){
		printf("파일을 못 열음\n");
		return;
	}
	for(i=0;i<3;i++){
		printf("input a word:");
		scanf("%s",word); //배열의 경우 &연산자 필요없음 
		fputs(word,fp); //문자열:fputs, 문자:fputc
		fputc('\n',fp); // 각 단어 뒤에 줄바꿈 추가 (파일에 새 줄을 추가)
	}
	fclose(fp);
}
