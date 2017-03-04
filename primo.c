#include <stdio.h>

int main () {
	
	int n, i, j, aux;
	
	printf ("Introduce un numero cualquiera: ");
	scanf ("%i",&n);
	
	j = 0;
	
	for (i = 2; i < n && j != 1 && n != 1; i++){
		aux = n % i;
		if (aux == 0) {
			j = 1;
		}
	}
	
	if (n == 1){
		printf ("\n\n1, no es un numero primo.\n\n\n");
	}
	else if (j == 1){
		printf ("\n\n%i, no es un numero primo.\n\n\n",n);
	}
	else {
		printf ("\n\n%i, es un numero primo.\n\n\n",n);
	}
	system ("pause");
	return 0;
}
