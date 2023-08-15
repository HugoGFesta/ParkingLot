#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include "estacionamento.h"
#include "parque.h"
#include "menu.h"

//menu
void menu()
{

	int i;
	int j;
	ESTACIONAMENTO **parque;
	int parque_criado = 0;
	int n_pisos, lugares_piso;
	int estacionar_piso, estacionar_lugar;
	char matricula[9];
	char opcao;
	int sair = 0;

	while (!sair)
	{

		desenhamenu();

		scanf("%s", &opcao);

		switch (opcao)
		{
		case '1':
			printf("\n  Indique o numero de pisos e lugares! (Exemplo: 5 4) ");
			scanf("%d %d", &n_pisos, &lugares_piso);

			parque = criarParque(n_pisos, lugares_piso);
			parque_criado = 1;

			break;
		case '2':
			if (parque_criado)
			{
				info_parque(n_pisos, lugares_piso, parque);
			}
			else
			{
				printf("\n | O parque ainda nao foi criado. Crie primeiro.\n");
			}
			break;
		case '3':
			if (parque_criado)
			{
				estacionarViatura(n_pisos, lugares_piso, parque);
			}
			else
			{
				printf("\n | O parque ainda nao foi criado. Crie primeiro.\n");
			}
			break;
		case '4':
			if (parque_criado)
			{
				retirarViatura(n_pisos, lugares_piso, parque);
			}
			else
			{
				printf("\n  | O parque ainda nao foi criado. Crie primeiro.\n");
			}
			break;
		case '5':
			visualizarParque(n_pisos, lugares_piso, parque);
			break;
		case '0':
			terminarSessao();
			sair = 1;
			break;
		default:
			printf("  | Tem de inserir uma opcao valida.\n\n");
			break;
		}
	}
}

int main()
{
	menu();
	return 0;
}
