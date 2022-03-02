#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int num;
	
	printf("Numero para tabuada: \n");
	scanf("%d", &num);
	
	
	printf("\t%d x 1 : %d \n", num, num*1);
	printf("\t%d x 2 : %d \n", num, num*2);
	printf("\t%d x 3 : %d \n", num, num*3);
	printf("\t%d x 4 : %d \n", num, num*4);
	printf("\t%d x 5 : %d \n", num, num*5);
	printf("\t%d x 6 : %d \n", num, num*6);
	printf("\t%d x 7 : %d \n", num, num*7);
	printf("\t%d x 8 : %d \n", num, num*8);
	printf("\t%d x 9 : %d \n", num, num*9);
	
	
	getch();
	
	return 0;
	
}