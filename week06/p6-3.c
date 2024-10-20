#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습4] 문자 개수 세기 
int main(int argc, char *argv[]) {
	int num=0; //문자 개수 세는 변수 선언, 초기값0으로 설정 
	char c; //입력받은 문자 1개 
	
	printf("Input a string: "); //while문 뒤에;가 있으면 루프 종료 
	while((c=getchar()) !='\n'){
		if(c>47 && c<58){
			num++; // num=num+1 써도 됨	
		}
	}
	
	printf("The number of digits is %i",num);
	return 0;
}
//getchar(): 입력에서 한 문자씩 읽어옴, c:읽어온 문자 저장,  !='\n': 줄바꿈 전까지 
