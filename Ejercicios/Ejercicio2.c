/* Ejercicio 1.2
Elaborar un programa que solicite por teclado dos lados de un rect�ngulo. Luego
calcule el per�metro y �rea del mismo. Mostrar los resultados de la siguiente forma:
Area:        200
Per�metro:    60
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int base,altura,area,perimetro;
	
	printf("Ingresar base del rect�ngulo: ");
	scanf("%d",&base);
	printf("Ingresar altura lado del rect�ngulo: ");
	scanf("%d",&altura);
	
	area= base * altura;
	perimetro= (base*2)+(altura*2);
	
	printf("Area: %10d\nPerimetro: %5d",area,perimetro);
	
	return 0;
}

