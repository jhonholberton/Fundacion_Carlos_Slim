#include <stdio.h>
/* validacion de contraseña correcta */

int main()
{
	int password;
	do
	{
		printf("introduce la contraseña\n");
		scanf("%i", &password);
	}
	while (password != 123);
		printf("Bienvenido\n");	
}
