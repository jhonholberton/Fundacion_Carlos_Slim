#include <stdio.h>
/*hallar area de un triangulo*/

void funcion_area_triaungulo()
{
	float base, altura, resultado; 
	printf("Dame el valor de la base\n");
	scanf("%f", &base);
	printf("Dame el valor de la altura\n");
	scanf("%f", &altura);
	resultado = ((base * altura) /2);
	printf("El area del triangulo es : %0.1f\n", resultado);
}

int main()
{
	printf("Bienvenido al programa que calcula el area del triangulo\n");
	funcion_area_triaungulo();
	getchar();
}
