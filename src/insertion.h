#ifndef INSERTION_H 
#define INSERTION_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


#define MAXSIZE 10


typedef struct Vector Vector;

struct Vector{
	int *itens;
	int tam;
	int swap;
};

void Initialize(Vector *v);
void Imprime(Vector *v);
void InsertionSort(Vector *v);

#endif