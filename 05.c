#include <stdio.h>
#define TAM 5
int main(){
	//Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no
	//seu respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida.
	
	int i, idade[TAM];
	float altura[TAM];
	
	//captura os elementos
	for(i = 0;i < 5; i++){
		printf("\nPessoa %d \n", i);
		printf("Idade %d : ", i);
		scanf("%d", &idade[i]);
		printf("Altura %d : ", i);
		scanf("%f", &altura[i]);
	}
	
	//EXIBIR VALORES ORIGINAIS
	printf("\n Valores originais\n");
	for(i = 0; i < TAM; i++){
		printf("\n Pessoa %d \n", i);
		printf("\n%d", idade[i]);
		printf("\n%.2f", altura[i]);
	}
	
	//EXIBIR VALORES INVERTIDOS
	printf("\n Valores Invertidos\n");
	for(i = TAM; i > 0; i--){
		printf("\nPessoa %d \n", i);
		printf("\n%d", idade[i]);
		printf("\n%.2f", altura[i]);
	}
	
	return 0;
}
