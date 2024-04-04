/* Ejercicio 1.2
Elaborar un programa que solicite por teclado dos lados de un rectángulo. Luego
calcule el perímetro y área del mismo. Mostrar los resultados de la siguiente forma:
Area:        200
Perímetro:    60
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int base,altura,area,perimetro;
	
	printf("Ingresar base del rectángulo: ");
	scanf("%d",&base);
	printf("Ingresar altura lado del rectángulo: ");
	scanf("%d",&altura);
	
	area= base * altura;
	perimetro= (base*2)+(altura*2);
	
	printf("Area: %10d\nPerimetro: %5d",area,perimetro);
	
	return 0;
}

