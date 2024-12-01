#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[실습4] 구조체와 포인터-구조체 포인터를 넘김 
struct point{
	int x;
	int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2){ //구조체 포인터를 전달  
	int baseline = pPtr2->x - pPtr1->x;
	int height = pPtr2->y - pPtr1->y;
	
	return baseline*height;
}

int main(int arge, char*argv[]){
	struct point p1, p2;
	struct point *pPtr1, *pPtr2;
	int area;
	
	printf("Input the coordinate p1 (x,y): ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("Input the coordinate p2 (x,y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	pPtr1=&p1;
	pPtr2=&p2;
	
	area=getArea(pPtr1,pPtr2);
	printf("Area: %d",area);
	
	return 0;
}
