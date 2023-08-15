#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include "menu.h"
#include "parque.h"

//imprime menu no terminal
void desenhamenu()
{
    printf("\n");

    printf("\n  +-------------------------------------------------------------------+\n");
    printf("  | Opcoes:                                                           |\n");
    printf("  |                                                                   |\n");
    printf("  | |1| - Criar o Parque.                                             |\n");
    printf("  | |2| - Guardar informacao sobre a ocupacao do parque.              |\n");
    printf("  | |3| - Estacionar uma viatura.                                     |\n");
    printf("  | |4| - Retirar uma viatura.                                        |\n");
    printf("  | |5| - Visualizar o parque.                                        |\n");
    printf("  |                                                                   |\n");
    printf("  | |0| - Sair.                                                       |\n");
    printf("  +-------------------------------------------------------------------+\n");
    printf("  | Insira a opcao: ");
}

ESTACIONAMENTO **criarParque(int n_pisos, int lugares_piso)
{
    ESTACIONAMENTO **parque = criar_Parque(n_pisos, lugares_piso);
    return parque;
}

void estacionarViatura(int n_pisos, int lugares_piso, ESTACIONAMENTO **parque)
{
    int estacionar_piso, estacionar_lugar;
    printf("\n  Onde quer estacionar a viatura?");
    printf("\n  Indique o par (piso lugar): ");
    scanf("%d %d", &estacionar_piso, &estacionar_lugar);
    estacionar(n_pisos, lugares_piso, parque, estacionar_piso, estacionar_lugar);
}

void retirarViatura(int n_pisos, int lugares_piso, ESTACIONAMENTO **parque)
{
    char matricula[9];
    printf("  | Qual e a viatura que quer retirar?\n");
    printf("  | Matricula: ");
    scanf("%s", matricula);
    retirar(n_pisos, lugares_piso, parque, matricula);
    printf("\n  | Operacao terminada.\n");
}

void visualizarParque(int n_pisos, int lugares_piso, ESTACIONAMENTO **parque)
{
    printf("\n  Estado atual do parque:\n");
    printf("\n  |L| - Livre.\n  |O| - Ocupado.\n\n");
    mostrar_Parque(n_pisos, lugares_piso, parque);
}

void terminarSessao()
{
    printf("\n\n  | A terminar sessao ...\n\n");
    sleep(1);
    printf("  | Sessao terminada.\n");
    printf("  | Obrigado, ate a proxima!\n\n");
}
