#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	
/*10. Utilizando listas faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
1. "Telefonou para a vítima?"
2. "Esteve no local do crime?"
3. "Mora perto da vítima?"
4. "Devia para a vítima?"
5. "Já trabalhou com a vítima?" 
O programa deve no final emitir uma classificação sobre a participação da pessoa no crime.
Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como 
"Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".*/

int continuar = 1, i = 0, sim = 0, nao = 0, resposta[5];
char matrizFrases[5][30] = {"Telefonou para a vitima? ",
							"Esteve no local do crime? ",
							"Mora perto da vitima? ",
							"Devia para a vitima? ",
							"Ja trabalhou com a vitima? "};
									
while(continuar == 1){
	
		//Recebendo respostas
		printf("Responda '1' - SIM ou '2' - NAO !\n");
		for(i = 0; i < 5; i++){
			printf("%s", matrizFrases[i]);
			scanf("%d", &resposta[i]);
			if(resposta[i] == 1){
				sim++;
			}
			else{
				nao++;
			}
		}
		
		//Informando respostas
		printf("\nSuas respostas foram |%d| SIMs e |%d| NAOs\n\n", sim, nao);
		
		//Passando resultado 
		if(sim == 2){
			printf("Voce eh um(a) SUSPEITO(A)");
		}
		else if(sim == 3 || sim == 4){
			printf("Voce eh um(a) CUMPLICE");
		}
		else if(sim == 5){
			printf("Voce eh o(a) ASSASSINO(A)");
		}
		else{
			printf("Voce eh INOCENTE");
		}
		system("cls");
		printf(" Deseja continuar 1 - SIM ou 2 - NAO? ");
		scanf("%d", &continuar);
	}
}
