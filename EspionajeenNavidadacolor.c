#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "myconio.h"

void main(){
	char carta[100];
	char tecla,i,nc;
	int longitud;
	textcolor(LIGHT_YELLOW);
	printf ("\n\n\n Ingresa el numero de cartas que deseas codificar: ");
	fflush(stdin);
	scanf("%d",&nc);
	for(nc;nc>0;nc--){
	fflush(stdin);
	system("cls");
	textcolor(LIGHT_BLUE);
	printf ("\n\n\nBienvenido, ingresa tu carta:\n");
	textcolor(LIGHT_RED);
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
					break;
				}
			}
		}
		textcolor(LIGHT_GREEN);
		printf("%c",carta[i]);
	}
	printf("\n\n");
	textcolor(LIGHT_BLUE);
	system("pause");
	}
	
}
