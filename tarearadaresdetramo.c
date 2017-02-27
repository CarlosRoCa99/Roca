#include <stdio.h>
int main () {
	int maximav,distancia,tiempo;
	do {
	printf ("Ingrese la velocidad maxima (Km/h): ");
	scanf ("%i",&maximav);
	printf ("Ingrese la distancia entre cada camara (metros): ");
	scanf ("%i",&distancia);
	printf ("Ingrese el tiempo transcurrido en el cual el vehiculo paso por la primera camara y luego por la segunda (segundos): ");
	scanf ("%i",&tiempo);
	if(maximav==0 && distancia==0 && tiempo==0){
		printf ("\n\nHasta luego.\n\n");
	}
	else if (((distancia/tiempo)*3600/1000)<=maximav){
		printf ("\n\nOK\n\n");
	}
	else if (((distancia/tiempo)*3600/1000)>maximav){
		printf ("\n\nMULTA\n\n");
	}
} while (maximav != 0 && distancia != 0 && tiempo != 0);
	system ("pause");
	return 0;
}
