#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int numGatos;
	
	printf("Numero de gatos: \n");
	scanf("%d", &numGatos);

	
	printf("%d gato(s) em base octal : %o\n", numGatos, numGatos);
	printf("%d gato(s) em base hexadecimal : %x\n", numGatos, numGatos);


	getch();
	
	return 0;
	
}