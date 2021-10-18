#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void){
	/*//Faça um Programa que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes.
	char strinG[10];
	int consoante = 0, vogais = 0, i;
	
	//Informando as letras ao vetor
	printf("Informe uma string de até 10 caracteres:\n OBS: se passar, o restante sera ignorado! ");
	scanf("%s", &strinG);
	system("cls");

	//Lógica para contar e mostrar as consoantes
	printf("As consoantes sao: ");
	for(i = 0; i < 10; i++){
		if(strinG[i] != 'a' && strinG[i] != 'e' && strinG[i] != 'i' && strinG[i] != 'o' &&strinG[i] != 'u'){
			consoante ++;
			printf("%c ", strinG[i]);
		}
		else{
			vogais++;
		}
	}
	printf(" \nSao: %d consoantes! ", consoante);
	printf(" \nSao: %d vogais! ", vogais);
	*/
	/*char vetorCaracteres[10];
	int i, consoante =0, vogais=0;
	
	printf("Digite ate 10 caracteres : ");
	scanf("%s", vetorCaracteres);
	//gets()
	for(i = 0; i <= 10; i++){
		//printf("%c", vetorCaracteres[i]);
		if(vetorCaracteres[i] != 'a' && vetorCaracteres[i] != 'e' && vetorCaracteres[i] != 'i' && vetorCaracteres[i] != 'o' &&vetorCaracteres[i] != 'u'){
			printf("%c", vetorCaracteres[i]);
			consoante ++;
		}
		else{
			vogais++;
		}
		
	}
	printf("Tem %d consoantes", consoante);
	printf("Tem %d vogais ", vogais);*/
	


	char vetorDezCaracteres[10];
	char vetorVogais[] = {'A','E','I','O','U','a','e','i','o','u'}; //desafio
	
	printf("Digite até 10 caracteres: ");
	scanf("%s", vetorDezCaracteres);
	
	 int lenCaracteres = sizeof(vetorDezCaracteres)/sizeof(char);
	 int lenVogais = sizeof(vetorVogais)/sizeof(char);
	 int i,j;
	 
	
	//  printf("lenCaracteres: %d \n",lenCaracteres);
	//  printf("lenVogais: %d \n",lenVogais);
	
	 printf("Digite até 10 caracteres: ");
	 //scanf("%s",vetorDezCaracteres); // gets(vetorDezCaracteres);
	 
	
	 printf("O texto digitado foi: %s \n", vetorDezCaracteres);
	
	 for(i=0; i<lenCaracteres; i++){
	 	int countVogais=0;
	   for(j=0; j<lenVogais; j++){
	   	if(vetorDezCaracteres[i] == vetorVogais[j]){
	   		countVogais++;
		   }
	   }
	   if(countVogais == 0){
	   	printf("%c \n", vetorDezCaracteres[i]);
	   }
	 }

}
