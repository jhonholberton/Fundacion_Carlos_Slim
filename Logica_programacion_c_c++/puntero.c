#include <stdio.h>
/* solicitud de direccion de memoria mendiante punteros*/

int main()
{
	int numero;
	int *p;
	p = &numero;
	printf("introduce un numero\n");
	scanf("%i", &numero);
	printf("Direccion en memoria de la variable numero es: %p\n", p);
	printf("el numero contenido en la variable es: %i\n", *p);
	getchar();
}
