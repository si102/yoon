#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습4] 문자열 길이 계산 
void main(void){
	char str[30]="happy C programming";
	
	printf("문자열\"%s\"의 길이:%i",str,strlen(str)); //반환값: 문자열의 길이(널 종료 문자를 제외한 문자 수)를 반환합니다.
}
// 문자열"happy C programming"의 길이:19
