#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// [�ǽ�3]���ڿ� ���� 

void main(void){
	char src[]="The worst things to eat before you sleep"; //������ ���� ���ڿ�  
	char dst[100]; // ������ ���ڿ��� ������ ��� 
	
	strcpy(dst,src); // ���� ��� ���ڿ�:strcpy(<���>,<����>);
	
	printf("copied string : %s", dst);
}
