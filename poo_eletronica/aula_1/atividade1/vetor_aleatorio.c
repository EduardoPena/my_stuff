
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 1000000
#define MOD 179424691
#define MOD2 179424929

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}


void vetorAleatorio(int *vet, int tamanho){
	
	int i;
    srand(time(NULL));
	for(i=0;i<tamanho;i++){
		vet[i]=abs((rand()%MOD));
 	}

}

int main(){
	int i, soma;
	int conjunto[T];

	clock_t t;
    t = clock();

	vetorAleatorio(conjunto, T);
	
	// ordena o vetor
	qsort(conjunto, T, sizeof(int), cmpfunc);	

    soma = abs((rand()%MOD2));   

    t = clock() - t;
    double tempo_decorrido = ((double)t)/CLOCKS_PER_SEC; // in seconds
 
    printf("Demorei %f segundos para gerar e ordenar o conjunto aleatorio \n", tempo_decorrido);

  	
  	/*
  	printf("Imprimindo Valores ordenados: \n");
    printf("Conjunto: \n");
	for(i=0;i<T;i++){
		printf("%d\n", conjunto[i]);
	}
	*/


	return 0;
}