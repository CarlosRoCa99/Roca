#include <stdio.h>

int main () {

/* Lo hice la primera vez de esta manera, luego lo optimicé a la actual.
int x,i,numero;

x=0;

printf ("Ingrese un numero\n");
scanf ("%i",&numero);

for (i=1;i<=numero;i++) {
	if (numero%i==0) x++;
}

if (x==2)
{
	printf ("\nEl numero es primo\n");
}
else {
	printf ("\nEl numero no es primo\n");
}*/

int i,x,y;
char z;

do{
	y=1;
	printf("Ingresa un numero: ");
scanf("%i",&x);

for(i = 2;i<x && y!= 0;i++){
	y = x%i;
}

if (y != 0){
	printf("El numero es primo.\n");
}

else{
	printf("El numero no es primo.\n");
}
do {
	printf ("Desea realizar otro calculo? (s/n): ");
	fflush (stdin);
	scanf ("%c",&z);
	printf ("\n\n");
}while (z != 's' && z != 'S' && z != 'n'&& z != 'N');
}while (z == 's' || z == 'S');

system ("pause");
return 0;
}
