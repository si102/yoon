#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*[실습4] 구조체와 포인터-구조체 변수 자체를 매개변수로 넘김 
struct point{
	int x;
	int y;
};

int getArea(struct point p1, struct point p2){ //넓이 구하기 
	int baseline=p2.x-p1.x;
	int height=p2.y-p1.y;
	return baseline*height;
}

int main(int arge, char*argv[]){
	struct point p1, p2;
	int area;
	
	printf("Input the coordinate p1 (x,y): ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("Input the coordinate p2 (x,y): ");
	scanf("%d %d", &p2.x, &p2.y);
	 
	area=getArea(p1,p2);
	printf("Area: %d",area);
	
	return 0;
}*/
