#include <stdio.h>
#define TAM 6
//Fa�a  um  Programa  que  leia  20  n�meros  inteiros  e  armazene-os  num vetor. Armazene os
//n�meros pares no vetor PAR e os n�meros IMPARES no vetor impar. Imprima os tr�s vetores.

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
