#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습2] 구조체 연산 
struct point{
	int x;
	int y;
	int a, b; 
};

int main(void){
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;
	
	printf("input p1, coordinate (x,y): ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("input p2, coordinate (x,y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	xdiff=p2.x-p1.x;
	ydiff=p2.y-p1.y;
	
	dist=sqrt(xdiff*xdiff+ydiff*ydiff);
	
	printf("distance: %f\n",dist); // "\n" 넣는 이유: 뒷 문장 있을경우 이어짐 방지 
	
	return 0;
}
