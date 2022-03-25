#include "insertion.h"

int main(){
	
	Vector v;
	
	Initialize(&v);
	Imprime(&v);
	printf("\n");
	InsertionSort(&v);
	printf("NUMBER OF SWAPS:%d\n", v.swap);
	
	return 0;
}
