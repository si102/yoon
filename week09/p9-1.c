#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습1] 변수 범위 
int main(void) {
	int flag = 1;
	int y; //수정 
	while(flag!=0)
	{
		int y;
		y=3;
		flag = 0;
	}
	y=4;
}

// 예상: flag=0이 내부 객체 이므로 무한루프 될 것 
// 결과: 무한루프는 일어나지 않으나 내부에서 정의한 y로 인해 외부 y가 정의되지 않음 
