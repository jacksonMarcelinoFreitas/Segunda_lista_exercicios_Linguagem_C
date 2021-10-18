#include <stdio.h>
#define TAM 3
//Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que determine quantos alunos com
//mais de 13 anos possuem altura inferior à média de altura desses alunos.
int main(){

	int i, idade[TAM], maior13=0, somaAlunos=0, media, alunosInferior=0;
	float altura[TAM], alturas=0;
	
	//captura os elementos
	for(i = 0;i < TAM; i++){
		printf("\nPessoa %d \n", i);
		printf("Idade %d : ", i);
		scanf("%d", &idade[i]);
		if(idade[i] > 13){
			maior13++;
		}
		printf("Altura %d : ", i);
		scanf("%f", &altura[i]);
		alturas += altura[i];
		somaAlunos++;
	}
	media = alturas/20;
	
	for(i = 0;i < TAM; i++){
		if(idade[i] > 13){
			if(altura[i] < media){
				alunosInferior++;
			}
		}
	}
	printf("\nA quantidade de alunos maiores de 13 com alturas inferiores a media eh: %d", alunosInferior);
	printf("\nIdade maiores que treze: %d", maior13);
	printf("\nSoma alturas: %.2f", alturas);
	
	
	//EXIBIR VALORES ORIGINAIS
	printf("\n Valores originais\n");
	for(i = 0; i < TAM; i++){
		printf("Pessoa %d \n", i);
		printf("%d", idade[i]);
		printf("%.2f", altura[i]);
	}
	
	//EXIBIR VALORES INVERTIDOS
	printf("\n Valores Invertidos\n");
	for(i = TAM; i > 0; i--){
		printf("\nPessoa %d \n", i);
		printf("%d", idade[i]);
		printf("%.2f", altura[i]);
	}
	
	return 0;
}
