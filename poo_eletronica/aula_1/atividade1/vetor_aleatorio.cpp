
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 1000

void vetorAleatorio(int *vet, int tamanho){
	
	int i;
    srand(time(NULL));
	for(i=0;i<tamanho;i++){
		vet[i]=abs((rand()%51));
 	}

}

main(){
	int vet[T];
	vetorAleatorio(vet, T);
	int i;
        
	for(i=0;i<1000;i++){
		printf("%d\n", vet[i]);
	}


}