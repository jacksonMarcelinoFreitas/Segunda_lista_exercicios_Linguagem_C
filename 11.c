#include <stdio.h>
#include <stdlib.h>

/*11.Faça  um  programa  que  leia  um  número  indeterminado  de  valores, correspondentes  a  notas,
encerrando  a  entrada  de  dados  quando  for informado um valor igual a -1 (que não deve ser armazenado). Após esta entrada de dados, faça:
1.Mostre a quantidade de valores que foram lidos;
2.Exiba todos os valores na ordem em que foram informados, um ao lado do outro;
3.Exiba todos os valores na ordem inversa à que foram informados, um abaixo do outro;
4.Calcule e mostre a soma dos valores;
5.Calcule e mostre a média dos valores;
6.Calcule  e  mostre  a  quantidade  de  valores   acima   da  média calculada;
7.Calcule e mostre a quantidade de valores abaixo de sete;
8.Encerre o programa com uma mensagem;*/

int main(void){
	//usar for 
	
	int i=0, tamNotas=0, acima=0, abaixoSete=0, media = 0, soma =0;
	//Informando tam vetor
	printf("Informe a quantidade de notas : ");
	scanf("%d", &tamNotas);
	
	int notas[tamNotas];
	//Preenchendo vetor e somando
	for( i = 0; i < tamNotas; i++){
		scanf("%d", &notas[i]);
		if(notas[i] == -1){
			notas[i=i-1];
			break;
		}
		soma = soma + notas[i];
	}
	media = soma/tamNotas;
	
	//lógica acima da media
	for( i = 0; i < tamNotas; i++){
		if(notas[i] > media){
			acima++;
		}
	}
	
	//lógica menor que sete
	printf("\nNOTAS MENORES QUE SETE:\n");
	for( i = 0; i < tamNotas; i++){
		if(notas[i] > media){
			printf("%d", notas[i]);
			abaixoSete++;
		}
	}

	//Exibindo ao lado
	printf("\nEXIBINDO AO LADO:\n");
	for(i = 0; i < tamNotas; i++){
		printf(" %d , ", notas[i]);
	}
	//Exibindo inverso abaixo
	printf("\nEXIBINDO INVERSO E ABAIXO:\n");
	for(i = tamNotas - 1;i >= 0; i--){
		printf("%d\n", notas[i]);
	}
	
	printf("\nA MEDIA DAS NOTAS EH: %d \n", media);
    printf("\nQUANTIDADE DE NOTAS MAIORES QUE A MEDIA: %d \n", acima);
}
