
//estado do lugar
typedef enum {
	L,O
} estado_lugar;

//struct
typedef struct parque_Lugar{
	
	estado_lugar ocupacao;
	char matricula[9];
	time_t tempo_entrada;	
	
}ESTACIONAMENTO;

void estacionar(int n_pisos, int lugares_piso, ESTACIONAMENTO **parque, int piso, int lugar);
void retirar(int n_pisos, int lugares_piso, ESTACIONAMENTO **parque, char r_matricula[]);
int verifica_matricula(int n_pisos, int lugares_piso, ESTACIONAMENTO **parque, char r_matricula[]);

