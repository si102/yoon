#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습4] 덧셈 프로그램 
int main(int argc, char *argv[]) {
	int sum=0; //더하기 저장하는 변수 선언, 0으로 초기화
	int num; //입력받을 정수 저장 변수 
	int i;
	 
	printf("Enter a number: ");
	scanf("%i",&num);
	
	//for문 형태 for(초기식;조건식;증감식) 
	for(i=0;i<=num;i++){ 
		sum=sum+i; //sum += i  
	} //i=0: i초기 값0, i=num까지 실행, i의 값을 1씩 올림 
	
	printf("%i",sum);
	return 0;
}

