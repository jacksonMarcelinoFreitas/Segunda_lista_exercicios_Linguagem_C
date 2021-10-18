//Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em uma lista.
// Após isto, calcule a média anual das temperaturas e mostre todas as temperaturas acima da
// média anual, e em que mês elas ocorreram (mostrar o mês por
// extenso: 1 – Janeiro, 2 – Fevereiro, . . . ).

#include <stdio.h>

int main(){
	int i;
	char meses[12][15] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" }; //quantidade de meses e tamanho das palavras.
	float temperatura[12], somaTemp, media;
	//PREENCHENDO VETOR
	printf("informe a temperatura em cada mes\n");
	for(i = 0; i < 12; i++){
		printf("\nMes : %d -> ", i+1);
		scanf("%f", &temperatura[i]);
		somaTemp += temperatura[i];
	}
	system("cls");
	
	//EXIBIR TEMPERATURAS
	printf("Temperaturas mensais: \n");
	for(i = 0; i < 12; i++){
		printf(meses[i]);
		printf(" -> ");
		printf("%.2f\n", temperatura[i]);
	}
	
	media = somaTemp/12;
	printf("A media de temperatura anual eh : %.2f", media);

	
	
	
	
	
	return 0;
}
