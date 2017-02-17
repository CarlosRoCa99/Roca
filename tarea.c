#include <stdio.h>

int main () {
	
	int numero,unidad,decena,centena;
	
	printf ("Introduzca un numero de tres cifras\n\n");
	scanf ("%i",&numero);
	
	if ( numero >= 100 ){
		if (numero <= 999){
		unidad = numero %10;
		decena = (numero % 100) / 10;
		centena = numero / 100;	
		
		printf ("Unidad: %i.\n",unidad);
		printf ("Decena: %i.\n",decena);
		printf ("Centena: %i.\n",centena);
		}
		
	}
	else {
		printf ("Ese no es un numero de tres cifras\n\n");
	}
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}
