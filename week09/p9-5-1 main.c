#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습5-1]Likage(연결) 
int all_files;

extern void sub();
 
int main(void) 
{
	sub();
	printf("%d\n",all_files);
	return 0;
}

