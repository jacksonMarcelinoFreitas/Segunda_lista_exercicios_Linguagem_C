#include <stdio.h>
#define TAM 3

int main(){
	//Altere o programa anterior, intercalando 3 vetores de 10 elementos cada.
	int vetor1[TAM], vetor2[TAM], vetor3[TAM],i, vetor4[20];
	//PRIMEIRO VETOR
	printf("Informe o primeiro vetor: \n");
	for(i = 0; i < TAM; i++){
		scanf("%d", &vetor1[i]);
	}
	//SEGUNDO VETOR
	printf("Informe o segundo vetor: \n");
	for(i = 0; i < TAM; i++){
		scanf("%d", &vetor2[i]);
	}
	//TERCIRO VETOR
	printf("Informe o segundo vetor: \n");
	for(i = 0; i < TAM; i++){
		scanf("%d", &vetor3[i]);
	}
	//TERCEIRO VETOR
	for(i = 0; i < TAM*2; i++){
		vetor4[i*3] = vetor1[i];
	}
	
	for(i = 0; i < TAM*2; i++){
		vetor4[i*3+1] = vetor2[i];
	}
	//Mostrando vetor 3
	for(i = 0; i < TAM*3; i++){
		printf("%d\n", vetor4[i]);
	}
	return 0;
}
