#include "insertion.h"


void Initialize(Vector *v){
	
	//Porque 42? Leia o guia definitivo do mochileiro das galáxias :).
	srand(42); 
    
    v->itens = (int*)malloc(MAXSIZE*sizeof(int));
	for(int i=1; i<=MAXSIZE; i++)
		v->itens[i] = rand()%100;
	v->swap = 0;
}


void Imprime(Vector *v){
	for(int i=1; i<=MAXSIZE; i++)
		printf("%d\t", v->itens[i]);
	printf("\n");
}


void InsertionSort(Vector *v){
	int aux;
	int j;

	for(int i=1;i<=MAXSIZE;i++){
		
		aux = v->itens[i];
		j = i - 1;
		v->itens[0] = aux;
		
		while(aux < v->itens[j]){
			v->itens[j+1] = v->itens[j];
			j = j - 1;
			v->swap ++;
		}

		v->itens[j+1] = aux;
		
		Imprime(v);
	}
}


