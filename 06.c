#include <stdio.h>
#define TAM 10
int main(){
	/*//Faça um Programa que leia dois vetores com 10 elementos cada. Gere
	//um terceiro vetor de 20 elementos, cujos valores deverão ser
	//compostos pelos elementos intercalados dos dois outros vetores.
	
	int vetor1[TAM], vetor2[TAM], i, vetor3[20];
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
	//TERCEIRO VETOR
	for(i = 0; i < TAM*2; i++){
		vetor3[i*2] = vetor1[i];
	}
	for(i = 0; i < TAM*2; i++){
		vetor3[i*2+1] = vetor2[i];
	}
	//Mostrando vetor 3
	for(i = 0; i < TAM*2; i++){
		printf("%d", vetor3[i]);
	}*/
	
	//Código em aula
	int vetor1[] = {1,2,3,4};
	int vetor2[]= {10,20,30,40};
	
	int vetor3[8];
	int cont = 0;
	int i=0;
	
	for( i = 0; i < 0; i+=2){
		vetor3[i] =  vetor1[cont];
		vetor3[i+1] = vetor2[cont++];
	}
	for(i = 0; i < 8; i++){
		printf("%d \n", vetor3[i]);
	}
	
	
}
