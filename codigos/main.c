#include <stdio.h>
#include <stdlib.h>
#include "inserirProduto.h"

int main(void){
    int numeroProdutos = 0;
    int *ponteiroNumeroProdutos = NULL;
    Produtos *produto = NULL;
    char comando[3] = {0};

    ponteiroNumeroProdutos = &numeroProdutos;

    while(1){ //depois mexer no while para ter como sair da execução
    scanf("%s", comando);

    if(comando[0] == 'I' && comando[1] == 'P'){
        inserirProduto(ponteiroNumeroProdutos, &produto);
        /*printf("--- PRODUTO ADICIONADO ---\n");
        printf("Nome:       %s\n", produto[numeroProdutos - 1].nome);
        printf("Quantidade: %d\n", produto[numeroProdutos - 1].quantidade);
        printf("Preco:      R$ %lf\n", produto[numeroProdutos - 1].preco);
        free(produto);*/
    }

    }



}