#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include "estacionamento.h"
#include "parque.h"

//metodo que cria o parque
ESTACIONAMENTO** criar_Parque(int n_pisos,int lugares_piso){
	
	int i,j;
	ESTACIONAMENTO **parque = (ESTACIONAMENTO **)malloc(n_pisos*(sizeof(ESTACIONAMENTO)));
	for(i=0;i<n_pisos;i++){
		parque[i] = (ESTACIONAMENTO *)malloc(lugares_piso*(sizeof(ESTACIONAMENTO)));
		for(j=0;j<lugares_piso;j++){
			parque[i][j].ocupacao = L; 
		}	
	}	
	printf("\n  Parque criado com sucesso!\n");
	return parque;	
}

//metodo que mostra o parque
void mostrar_Parque(int n_pisos,int lugares_piso, ESTACIONAMENTO **parque){
	int i,j;
	printf("              ");
	for(i = 0; i < lugares_piso; i++) {
		if(i<10){
			printf("%d  ", i);
		}else{
		printf("%d ", i);
		}
		
	}
	printf("\n");
	for(i=0;i<n_pisos;i++){
		if(i<10){
			printf("  | Piso: %d  ", i);
		}else{
		printf("  | Piso: %d ", i);
		}
		for(j=0;j<lugares_piso;j++){
			if(parque[i][j].ocupacao == 0){
				printf("|L|");
			}else{
				printf("|O|");
			}
		}	
		printf("\n");
	}
}

//metodo que da informacoes sobre o parque(tamanho e ocupacao)
void info_parque(int n_pisos, int lugares_piso, ESTACIONAMENTO **parque){
	int i,j, livres = 0, ocupados = 0;
	for (i = 0; i < n_pisos; i++){
		for (j = 0; j < lugares_piso; j++){
			if (!parque[i][j].ocupacao){
				livres++;
			}else{
				ocupados++;
			}
		}
	}
	printf("\n\n");
	printf("  | Informacao do parque:\n");
	printf("  |\tTotal de lugares: %d\n", n_pisos * lugares_piso);
	printf("  |\tLugares livres: %d\n", livres);
	printf("  |\tLugares ocupados: %d\n", ocupados);
}


