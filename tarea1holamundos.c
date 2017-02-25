#include <stdio.h>

int main () {
	
	int x,i;
	
	printf ("Introduzca el numero de Hola Mundos que desea que se muestren en pantalla :");
	scanf ("%i",&x);
	
	for (i=1;i<=x;i++){
		
		printf ("\nHola Mundo.");
	}
	
	printf ("\n\n");
	
	
	
	
	system ("pause");
	return 0;
}
