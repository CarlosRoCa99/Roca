#include <stdio.h>
int main () {
	float martes,miercoles,jueves,viernes,sabado,domingo,i;
	int semanas,ii;
	printf ("Ingrese el numero de semanas a calcular: ");
	scanf ("%i",&semanas);
	for(i=1;i<=semanas;i++){
		ii=1;
		while (martes != -1 && miercoles != -1 && jueves != -1 && viernes != -1 && sabado != -1 && domingo != -1 && ii == 1){
	printf ("Ingrese el numero de ingresos del dia martes: ");
	scanf ("%f",&martes);
	printf ("Ingrese el numero de ingresos del dia miercoles: ");
	scanf ("%f",&miercoles);
	printf ("Ingrese el numero de ingresos del dia jueves: ");
	scanf ("%f",&jueves);
	printf ("Ingrese el numero de ingresos del dia viernes: ");
	scanf ("%f",&viernes);
	printf ("Ingrese el numero de ingresos del dia sabado: ");
	scanf ("%f",&sabado);
	printf ("Ingrese el numero de ingresos del dia domingo: ");
	scanf ("%f",&domingo);
	if (martes>miercoles && martes>jueves && martes >viernes && martes>sabado && martes>domingo){
		printf ("MARTES ");
	}
	else if (miercoles>martes && miercoles>jueves && miercoles>viernes && miercoles>sabado && miercoles>domingo){
		printf ("MIERCOLES ");
	}
	else if (jueves>martes && jueves>miercoles && jueves>viernes && jueves>sabado && jueves>domingo){
		printf ("JUEVES ");
	}
	else if (viernes>martes && viernes>miercoles && viernes>jueves && viernes>sabado && viernes>domingo){
		printf ("VIERNES ");
	}
	else if (sabado>martes && sabado>miercoles && sabado>jueves && sabado>viernes && sabado>domingo){
		printf ("SABADO ");
	}
	else if (domingo>martes && domingo>miercoles && domingo>jueves && domingo>viernes && domingo>sabado){
		printf ("DOMINGO ");
	}
	else{
		printf ("EMPATE ");
	}
	if (martes<miercoles && martes<jueves && martes<viernes && martes<sabado && martes<domingo){
		printf ("MARTES ");
	}
	else if (miercoles<martes && miercoles<jueves && miercoles<viernes && miercoles<sabado && miercoles<domingo){
		printf ("MIERCOLES ");
	}
	else if (jueves<martes && jueves<miercoles && jueves<viernes && jueves<sabado && jueves<domingo){
		printf ("JUEVES ");
	}
	else if (viernes<martes && viernes<miercoles && viernes<jueves && viernes<sabado && viernes<domingo){
	printf ("VIERNES ");
	}
	else if (sabado<martes && sabado<miercoles && sabado<jueves && sabado<viernes && sabado<domingo){
		printf ("SABADO ");
	}
	else if (domingo<martes && domingo<miercoles && domingo<jueves && domingo<viernes && domingo<sabado){
		printf ("DOMINGO ");
	}
	else {
		printf ("EMPATE ");
	}
	if ( domingo > (martes + miercoles + jueves + viernes + sabado + domingo) / 6){
		printf ("SI\n\n");
	}
	if ( domingo < (martes + miercoles + jueves + viernes + sabado + domingo) / 6){
		printf ("NO\n\n");
	}
	if ( domingo==(martes+miercoles+jueves+viernes+sabado+domingo)/6){
		printf ("SI\n\n");
	}
	ii++;
	}
	}
	system ("pause");
	return 0;
}
