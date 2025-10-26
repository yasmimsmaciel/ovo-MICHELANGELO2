#include <stdio.h>
#include <stdlib.h>

// declara tamanho de uma cosntante que usaremos apra ser o array do OVO
#define OVO 15


// uma função que irá converter o vetor aos olhares do usuarios para colchetes, para ficar mais nitido o tabuleiro

void definirVetor(char vetor[], int tamanho) {
    printf("\n");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == '.') printf("[ ]");
        else printf("[%c]", vetor[i]);
    }
    printf("\n");
}

//função principal
int main(){
    int local;
    char casa[16];
    int vetor[OVO] = {};
    printf("Bem vindo ao jogo do ovo, digite a casa jogador.\n\n");
    definirVetor(vetor, OVO);
    printf("\n");

    for (int i = 0; i<OVO; i++){
        printf(" \nDigite o tipo de caractere e a casa:");
        scanf(" %s, %d", casa, &local);

    }
    return 0;
}
