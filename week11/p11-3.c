#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// [실습3]문자열 복사 

void main(void){
	char src[]="The worst things to eat before you sleep"; //복사할 원본 문자열  
	char dst[100]; // 복사한 문자열을 저장할 대상 
	
	strcpy(dst,src); // 복사 대상 문자열:strcpy(<대상>,<원본>);
	
	printf("copied string : %s", dst);
}
