#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[�ǽ�1-2] ����ü ���� �� Ȱ��-scanf �̿��ؼ� �Է� �ޱ� 
struct student{ //����ü ������ ���� ���� 
	int ID;
	char name[10];
	double grade;
};

void print_s1(struct student s1){
	printf("Your information is\n");
	printf("ID: %d\n", s1.ID);
	printf("name: %s\n", s1.name);
	printf("grade: %.6f\n", s1.grade);
} 
int main(void){
	struct student s1 ={24, "unknown", 0}; //����ü �ʱⰪ ����
	
	printf("Input the ID: ");
	scanf("%d",&s1.ID);
	
	 
	printf("Input the name: ");
	scanf("%s",s1.name);
	
	printf("Input the grade: ");
	scanf("%lf", &s1.grade); //1(x) l(o)
	
	print_s1(s1);
	
	return 0;
}
