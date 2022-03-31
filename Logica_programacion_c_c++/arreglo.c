#include <stdio.h>
/*Arreglo para almacenar datos, leerlos e insertar nuevos contenidos*/

int main()
{
	int arreglo[4];
	int longitud, posiciones, indice, numero;
	printf("Introduce el tamaño del arreglo\n");
	scanf("%i", &longitud);
		for (indice = 0; indice <= longitud -1; indice++)
		{
			printf("Introduce un valor numerico para el arreglo\n");
			scanf("%i", &arreglo[indice]);
		}
	printf("En que pocision quieres insertar el nuevo numero\n");
	scanf("%i", &posiciones);
	printf("Introduce el numero\n");
	scanf("%i", &numero);
	for(indice = longitud; indice >= posiciones +1; indice--)
		{
			arreglo[indice] = arreglo[indice -1];
			arreglo[posiciones] = numero;
		}
	printf("El arreglo es:\n");
	for(indice = 0; indice <= longitud; indice++)
		{
			printf("%i\n", arreglo[indice]);
		}
	getchar();
}
