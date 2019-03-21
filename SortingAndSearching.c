#include <stdio.h>
#include <stdbool.h>
#define lenght 5

void printArray(int *array){
	int i;
	for(i=0;i<5;i++){
		printf("%d ",array[i]);
	}
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *array){
	int i,j;
	for(i=0;i<lenght;i++){
		for(j=0;j<lenght;j++){
			if(array[j]>array[i]){
				swap(&array[i],&array[j]);
			}
		}
	}
	printf("\n\n\n\n");
	printf("Arreglo resultante:\n");
	printArray(array);
}

void bubbleFlagSort(int *array){
	int i;
	int j=0;
	bool flag;
	
	do{
		j++;
		flag=true;
		for(i=0;i<lenght-j;i++){
			if(array[i]>array[i+1]){
				swap(&array[i],&array[i+1]);
				flag = false;
			}
		}
	}while(!flag);
	printf("\n\n\n\n");
	printf("Arreglo resultante:\n");
	printArray(array);
}

void directSelectionSort(int *array){
	int i,j;
	for(i=0;i<lenght;i++){
		int minor = i;
		for(j=i+1;j<lenght;j++){
			if (array[j] < array[minor]){
				minor = j;
			}
		swap(&array[i],&array[minor]);
		}
	}
	printf("\n\n\n\n");
	printf("Arreglo resultante:\n");
	printArray(array);
}

void shakerSort(int *array){
	int i,j;
	for(i=0;i<lenght/2;i++){
		for(j=0;j<lenght;j++){
			if(array[j]>array[i]){
				swap(&array[i],&array[j]);
			}
		}
		for(j=lenght-1;j>=0;j--){
			if(array[j]>array[i+1]){
				swap(&array[i+1],&array[j]);
			}
		}
	}
	printf("\n\n\n\n");
	printf("Arreglo resultante:\n");
	printArray(array);
}

void linealSearch(int *array){
	int choice,i;
	printf("\n\n\nIngrese el numero a buscar: ");
	fflush(stdin);
	scanf("%d",&choice);
	for(i=0;i<lenght;i++){
		if(array[i]==choice) printf("\n\nEl numero %d se encuentra en la posicion %d",choice,i);
	}
}

void binarySearch(int *array){
	int choice,i,range;
	range = lenght;
	bool found = false;
	printf("\n\n\nPara relizar la busqueda por bloques se ha re-ordenado el arreglo de la siguiente forma:");
	bubbleSort(array);
	printf("\n\n\nIngrese el numero a buscar: ");
	fflush(stdin);
	scanf("%d",&choice);
}

void main(){
	
	int array[lenght] = {5,2,8,6,1};
	int i,j,choice;
	
	printf("Arreglo Original:\n");
	printArray(array);
	
	printf("\n\nQue metodo de ordenamiento o busqueda desea usar?\n\n1.-Burbuja clasico\n2.-Burbuja con bandera\n3.-Seleccion directa");
	printf("\n4.-Shaker Sort\n5.-Busqueda Lineal\n6.-Busqueda por bloques\n\nEleccion: ");
	fflush(stdin);
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			bubbleSort(array);
			break;
		case 2:
			bubbleFlagSort(array);
			break;
		case 3:
			directSelectionSort(array);
			break;
		case 4:
			shakerSort(array);
			break;
		case 5:
			linealSearch(array);
			break;
		case 6:
			binarySearch(array);
			break;
	}
	
	printf("\n\n\n\n");
	
	system("pause");
}
