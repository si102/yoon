#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//[½Ç½À2] ¿©·¯°¡Áö ÇÔ¼ö ±¸Çö 
int sumTwo (int a, int b){ //µ¡¼À ÇÔ¼ö Á¤ÀÇ 1 
	int output;
	output=a+b;
	return output; //µ¡¼ÀÇÔ¼ö ¹ÝÈ¯ 3
}
int square (int n){  
	return n*n ;
}
int get_max (int x, int y){ 
	if(x>y)return (x);
	else return(y);
	
}
int main(int argc, char *argv[]) {
	int first, second;
	int Sum, Square, Max;
	
	printf("Enter the integers: ");
	scanf("%i %i",&first,&second);
	
	Sum = sumTwo(first,second); //µ¡¼À ÇÔ¼ö È£Ãâ 2
	Square = square (first); 
	Max = get_max (first,second);
	
	printf("Result - Sum: %i, Square: %i, Max: %i",Sum,Square,Max);
	return 0;
}
