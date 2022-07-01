#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 5

char pilha[5][256];
int topo = 0;

void lista_elementos(){
	int i;
	printf("\n================Pilha Atual=================\n\n");
	for (i = TAM; i >= 0; i--){
		printf("\t\t%s", pilha[i]);
		printf("\n");
	}
	printf("\nTopo: %d", topo);
	printf("\n");
}

void push(){
	if (topo < TAM){
		printf("\nEntre com a COR para Empilhar: ");
		scanf("%s", &pilha[topo][0], 255);
		topo += 1;
		lista_elementos();
	}else{
		printf("\nPilha está cheia: \n");
	}
}

void pop(){
	if (topo > 0){
		printf("\nRemovendo elemento: \n");
		memset(&pilha[topo-1][0], 0, 256);
		topo = topo -1;
		lista_elementos();
	}else{
		printf("\nPilha está vazia: \n\n");
	}
}

void lista_nova(){
	int i;
	printf("\n================Pilha Resultante=================\n\n");
	for (i = 0; i <= TAM; i++){
		printf("\t\t%s", pilha[i]);
		printf("\n");
	}
	printf("\nTopo: %d", topo);
	printf("\n");
}

void clear(){
	int i;
	for (i = 0; i < TAM; i++){
		memset(&pilha[i][0], 0, 256);
	}
	topo = 0;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
	int opcao = 0;


	do{
		printf("\n    Selecione a opção: \n\n");
		printf("[1] - Empilhar.\n");
		printf("[2] - Desempilhar.\n");
		printf("[3] - Listar. \n");
		printf("[4] - Nova Lista.\n");
		printf("[5] - Limpar pilha.\n");
		printf("[-1] - Sair do Sistema.\n\n ");
		scanf("%d", &opcao);

		switch(opcao){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				lista_elementos();
				break;
			case 4:
				lista_nova();
				break;
            case 5:
                clear();
                break;
			case -1:
				break;
			default:
				printf("Opção Inválida: \n");
		}

	}while(opcao != -1);

	return 0;
}


