#include <stdio.h>
#include <stdlib.h>
// declara tamanho de uma cosntante que usaremos apra ser o array do OVO
#define OVO 15

//fazemos uma função para printar o vetor como queremos na tela.
void definirVetor(int vetor[], int tamanho){

    for (int i = 0; i<tamanho; i++){
        if (vetor[i]==0) printf("[  ]");
        else printf("[%d]", vetor[i]);
    }

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
