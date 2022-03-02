#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int base,altura,area,perimetro;
	
	printf("Base do retangulo:\n");
	scanf("%d", &base);
	printf("Altura do retangulo:\n");
	scanf("%d", &altura);

	area = base*altura;
	perimetro = (base * 2) + (altura * 2);
	
	printf("Area do retangulo: %d \n",area);
	printf("Perimetro do retangulo: %d \n",perimetro);

	getch();
	
	return 0;
	
}