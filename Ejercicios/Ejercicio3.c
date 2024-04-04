/*
Elaborar un programa en el que se ingrese por teclado un número real y, a
continuación, se muestra la parte entera de dicho número y la parte fraccionaria ( por
separado )
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	float num;
	int entero;
	float pFrac;
	
	printf("Ingresar número real: ");
	scanf("%f",&num);
	
	entero=num;
	
	pFrac= num-entero;
	
	printf("Número Ingresado: %f\nParte Entera: %d\nParte Fraccionaria: %f",num,entero,pFrac);
	
	return 0;
}

