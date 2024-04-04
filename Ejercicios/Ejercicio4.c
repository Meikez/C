/* Ejercicio 1.4
Desarrollar un programa en el que se ingresen dos números enteros positivos.
Luego debe generar y mostrar un tercer número que esté compuesto por las
unidades del primer número y por las decenas del segundo.
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	int num1,num2,resultado,u,u2,d;
	printf("Ingresar el primer número: ");
	scanf("%d",&num1);
	printf("Ingresar el segundo número: ");
	scanf("%d",&num2);
	u=num1%10;
	
	u2=num2%10;
	d=((num2-u2)%100)/10;
	
	resultado = (d*10)+u;
	printf("%d",resultado);
	
	
	return 0;
}

