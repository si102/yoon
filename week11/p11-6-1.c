#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�6-1] ���� �� ���ھ� �о�ͼ� ���� ��� 
void main(void){
	FILE*fp=NULL;
	char c;
	
	fp=fopen("sample.txt","r");
	if(fp==NULL){
		printf("������ �� ����\n");
		return; //���� �����ϸ� ���α׷� ���� 
	}
	while((c=fgetc(fp))!=EOF){
		putchar(c);
	}
	fclose(fp);
}
