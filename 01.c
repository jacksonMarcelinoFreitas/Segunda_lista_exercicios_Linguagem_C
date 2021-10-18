 
	/*//Leitura de arrays    Neste v�o dois for
    int i, j, linhas, colunas;
    printf("Informe o tamanho da matriz :\n");
    scanf("%d %d", &linhas, &colunas);
    system("cls");
	
	//Preenchendo matriz 
    int vetor[linhas][colunas];
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            scanf("%d", &vetor[i][j]);
        }
    }
    system("cls");
    //Mostrando a matriz
    for(i = 0; i < linhas; i++){
    	for(j = 0; j < colunas; j++){
    		printf("%d", vetor[i][j]);
		}
		printf("\n");
	}
	system("cls");
	
	
	
	//Leitura de vetores   Neste s� vai um for
	int i, tam;
	printf("Informe o tamnho do vetor : ");
	scanf("%d", &tam);
	
	//Preenchendo vetor
	int vetor[tam];
	for(i = 0; i < tam; i++){
		scanf("%d", &vetor[i]);
	}
	system("cls");
	
	//Mostrando vetor
	for(i = 0; i < tam; i++){
		printf("%d", vetor[i]);
	}+642
	*/
	
	// Fa�a um Programa que leia um vetor de 10 n�meros reais e mostre-os na ordem inversa.
	
	int tam = 10, posicao, vetor[tam];
	
	for(posicao = 0; posicao < tam; posicao++){
		printf("Posicao %d | Elemento: ", posicao);
		scanf("%d", &vetor[posicao]);
	}
	
	printf("Ordem normal");
	for(posicao = 0; posicao < tam; posicao++){
		printf(" %d, ", vetor[posicao]);
	}
	printf("Ordem inversa");
	for(posicao = tam-1; posicao >= 0; posicao--){ //Descremento
		printf(" %d, ", vetor[posicao]);
	}
	
    return 0;
}

