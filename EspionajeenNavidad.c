#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
	char carta[100];
	char tecla,i,j;
	int longitud;
	printf ("\n\n\n Bienvenido, si estas listo para cifrar tu carta presiona cualquier tecla...");
	tecla=getch();
	system("cls");
	gets(carta);
	longitud=strlen(carta);
	for(i=0;i<longitud;i++){
		if(carta[i]!=' '){
		carta[i]=toupper(carta[i]);
			if(carta[i]=='Z') carta[i]='A';
			else carta[i]+=1;
		}
	}
	for(i=0;i<longitud;i++){
		if(i==0 && carta[i]==' '){
			do{
				i++;
			}while(carta[i]==' ');
		}

		if(carta[i]=='G'){
			if(carta[i+1]=='J'){
				if(carta[i+2]=='O'){
					exit(1);
				}
			}
		}
		printf("%c",carta[i]);
		
	}
}
