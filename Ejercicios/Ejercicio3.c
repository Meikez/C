/*
Elaborar un programa en el que se ingrese por teclado un n�mero real y, a
continuaci�n, se muestra la parte entera de dicho n�mero y la parte fraccionaria ( por
separado )
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	float num;
	int entero;
	float pFrac;
	
	printf("Ingresar n�mero real: ");
	scanf("%f",&num);
	
	entero=num;
	
	pFrac= num-entero;
	
	printf("N�mero Ingresado: %f\nParte Entera: %d\nParte Fraccionaria: %f",num,entero,pFrac);
	
	return 0;
}

