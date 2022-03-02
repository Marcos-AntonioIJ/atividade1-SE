#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int totalPeras, podrePeras;
	
	printf("Numero de peras total : \n");
	scanf("%d", &totalPeras);
	
	printf("Numero de peras podres : \n");
	scanf("%d", &podrePeras);
	
	
	printf("o numero de peras a serem vendidas e : %d", totalPeras - podrePeras);
	
	getch();
	
	return 0;
	
}