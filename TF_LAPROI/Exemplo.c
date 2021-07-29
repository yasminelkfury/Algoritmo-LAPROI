#include <stdio.h>
int main(void){
	int vetor[] = {3,2,7,5,9,4}, min, aux;	
	for(int i = 0; i < 5; i++){
			printf("%d", vetor[]);
			min = i;
			for(int j = (i+1); j < 6; j++){
				if(vetor[j] < vetor[i]){
					min = j;
				}
				if(i != min){
					aux = vetor[i];
					vetor[i] = vetor[j];
					vetor[j] = aux; 
				}
			}
		}
			printf("%d", vetor[]);

	return 0;
}
