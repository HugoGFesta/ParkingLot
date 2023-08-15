#include "estacionamento.h"

ESTACIONAMENTO **criarParque(int n_pisos, int lugares_piso);
void desenhamenu();
void estacionarViatura(int n_pisos, int lugares_piso, ESTACIONAMENTO **parque);
void retirarViatura(int n_pisos, int lugares_piso, ESTACIONAMENTO **parque);
void visualizarParque(int n_pisos, int lugares_piso, ESTACIONAMENTO **parque);
void terminarSessao();

