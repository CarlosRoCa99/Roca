#include <stdio.h>

int main () {
	
	int numero,factorial,i;
	char condicional;
	
	do{
		
		printf ("Ingrese el numero al cual se le calculara el factorial: ");
	scanf ("%i",&numero);
	factorial = 1;
	
	for (i=2;i<=numero;i++){
		
		factorial *= i;
		
	}

	printf ("El factorial de %i, es %i.\n\n",numero,factorial);
	
	do {
		printf ("¿Desea calcular nuevamente un factorial? (s/n)");
	fflush (stdin);
	scanf ("%c",&condicional);
	printf ("\n\n");
	}while (condicional!='s'&&condicional!='S'&&condicional!='n'&&condicional!='N');
	
	}while (condicional == 's' || condicional == 'S');
	
	
	system ("pause");
	return 0;
}
