#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int num_cadaveres;
	char nome_cemiterio[100];
	
	printf("Numero de cadaveres enterrados : \n");
	scanf("%d", &num_cadaveres);
	
	printf("Nome do cemiterio : \n");
	scanf("%s", &nome_cemiterio);
	
	
	printf("o numero de mortos e : %d", num_cadaveres);
	printf("\n");
	printf("o nome do cemiterio e : %s", nome_cemiterio);
	
	getch();
	
	return 0;
	
}