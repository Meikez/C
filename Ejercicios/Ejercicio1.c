/* Ejercicio 1.1 
Elaborar un programa en el que se ingrese un número desde el teclado y muestre
por pantalla el resto de dividirlo por 2. El resultado lo debe mostrar justificado hacia
la derecha en 10 espacios. Ej. Salida:
*/

#include <stdio.h>
#include <stdlib.h> 
int main(int argc, char *argv[]) {
	int num1,num2;
	int res;
	printf("Ingresar el primer número: ");
	scanf("%d",&num1);
	printf("Ingresar el segundo número: ");
	scanf("%d",&num2);
	
	res= num1%num2;
	
	printf("%d %% %d es: %10d",num1,num2,res);
		
	return 0;
}

