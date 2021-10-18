#include <stdio.h>
int main(){
//Fa�a  um  Programa  que  pe�a  as  quatro  notas  de  10  alunos,  calcule 
//e armazene num vetor a m�dia de cada aluno, imprima o n�mero de alunos com m�dia maior ou igual a 7.0.	
/*
	float alunos[TAM], n1[TAM], n2[TAM], n3[TAM], n4[TAM], media[TAM];
	int i, cont;
	//PREENCHIMENTO E L�GICA
	for(i = 0; i < TAM; i++){
		printf("Aluno %d \n", i);
		scanf("%f %f %f %f", &n1[i], &n2[i], &n3[i], &n4[i]);
		media[i] = (n1[i]+n2[i]+n3[i]+n4[i])/4;
		if(media[i] >= 7){
			cont++;
		}
		printf("Media do aluno %d = %.2f \n\n", i, media[i]);
	}
	//NOTAS DE 7 ACIMA	
	printf("%d alunos tiraram medias iguias ou maiores a 7 !", cont );
*/

float nota, soma=0, media, mediaVetor[5];
int i,j, alunos, notas;

	printf("Informe o n�mero de alunos : ");
	scanf("%d", &alunos);
	printf("Informe o n�mero de notas : ");
	scanf("%d", &notas);
	
	for(i = 1; i <= alunos; i++){
		printf("Aluno %d\n", i);
		for(j = 1; j<= notas; j++){
			printf("Digite a nota %d: ", j);
			scanf("%f", &nota);
			soma += nota;	
		}
		media = soma/notas;
		mediaVetor[i] =media;
		soma=0;
	}
	int count=0;
	for( i = 1; i <= alunos; i++){
		if(mediaVetor[i] >= 7){
			printf("Aluno : %d \n", j );
			count++;
		}
	}
	printf("O umero de alunos com media maior igual a 7 eh: %d", count);
		

	
return 0;
}

// Declarando ponteiro 
int *ptrPont; //Usa-se "*" antes da palavra para declarar
int variavelComum;

//Definindo ponteiro
// Deve-se iniciar o ponterio com o NULL ou um endereço


