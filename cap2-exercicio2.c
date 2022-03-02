#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int numGatos,numCachorros,numRamsters;
	
	printf("Numero de gatos: \n");
	scanf("%d", &numGatos);
	printf("Numero de cachorros: \n");
	scanf("%d", &numCachorros);
	printf("Numero de ramsters: \n");
	scanf("%d", &numRamsters);

	
	printf(" Gatos\t");
	printf("     Cachorros\t");
	printf("     Ramsters\t");

	printf("\n");
	
	printf("   %d\t\t", numGatos);
	printf(" %d\t\t", numCachorros);
	printf(" %d\t\t", numRamsters);
	
	getch();
	
	return 0;
	
}