#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�6-1] ���� �� ���ھ� �о�ͼ� ���� ��� 
int main(void){
	FILE*fp=NULL;
	char word[100];
	
	fp=fopen("sample.txt","r");
	if(fp==NULL){
		printf("������ �� ����\n");
		return 1; //���� �����ϸ� ���α׷� ����, ������ ���� ��Ÿ��  
	}
	while(fgets(word,sizeof(word),fp)!=NULL){
		printf("%s",word);
	}
	fclose(fp);
	
	return 0;
}
