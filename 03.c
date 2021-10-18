#include <stdio.h>
#define TAM 6
//Faça  um  Programa  que  leia  20  números  inteiros  e  armazene-os  num vetor. Armazene os
//números pares no vetor PAR e os números IMPARES no vetor impar. Imprima os três vetores.

int main(){
	int vetor[TAM], i;
	//Preenchendo vetor
	printf("Informe %d numeros: \n", TAM);
	for(i = 0; i < TAM; i++){
		printf("%d )", i+1);
		scanf("%d", &vetor[i]);
	}
	//Pares
	printf("Pares\n");
	for(i = 0; i < TAM; i++){
		if(vetor[i]%2 == 0){
			printf("%d ", vetor[i]);
		}
		printf("\n");
	}
	//Impares
	printf("Impares\n");
	for(i = 0; i < TAM; i++){
		if(vetor[i]%2 == 1){
			printf("%d ", vetor[i]);
		}
		printf("\n");
	}
	
	return 0;
}
