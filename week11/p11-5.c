#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�5] �Է� ���� �ܾ ���Ϸ� ��� 
void main(void){
	FILE*fp=NULL;
	int i;
	char word[100]; //���ڿ��� �迭 �Ǵ� �����ͷθ� �������� ���� 
	
	fp=fopen("sample.txt","w"); //w�� ���� �������� ���� ���ϵ� ���� 
	if(fp==NULL){
		printf("������ �� ����\n");
		return;
	}
	for(i=0;i<3;i++){
		printf("input a word:");
		scanf("%s",word); //�迭�� ��� &������ �ʿ���� 
		fputs(word,fp); //���ڿ�:fputs, ����:fputc
		fputc('\n',fp); // �� �ܾ� �ڿ� �ٹٲ� �߰� (���Ͽ� �� ���� �߰�)
	}
	fclose(fp);
}
