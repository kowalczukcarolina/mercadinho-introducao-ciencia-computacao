#include <stdio.h>
#include <stdlib.h>
#include "inserirProduto.c"

int main(void){
    int numeroProdutos = 0;
    int *ponteiroNumeroProdutos = NULL;
    Produtos *produto = NULL;
    char comando[3] = {0};
    double saldo = 100;
    double *ponteiroSaldo = NULL;

    ponteiroNumeroProdutos = &numeroProdutos;
    ponteiroSaldo = &saldo;

    while(1){ //depois mexer no while para ter como sair da execução
    scanf("%s", comando);

    if(comando[0] == 'I' && comando[1] == 'P'){
        //INSERIR PRODUTO
        inserirProduto(ponteiroNumeroProdutos, &produto);
        /*printf("--- PRODUTO ADICIONADO ---\n");
        printf("Nome:       %s\n", produto[numeroProdutos - 1].nome);
        printf("Quantidade: %d\n", produto[numeroProdutos - 1].quantidade);
        printf("Preco:      R$ %lf\n", produto[numeroProdutos - 1].preco);
        free(produto);*/
    }else if(comando[0] == 'A' && comando[1] == 'E'){
        //AUMENTAR ESTOQUE

    }else if(comando[0] == 'M' && comando[1] == 'P'){
        //MODIFICAR PREÇO
        
    }else if(comando[0] == 'C' && comando[1] == 'E'){
        //CONSULATAR ESTOQUE
        
    }else if(comando[0] == 'C' && comando[1] == 'S'){
        //CONSULTAR SALDO

    }else if(comando[0] == 'F' && comando[1] == 'E'){
        //FINALIZAR O DIA
        break;
        
    }

    }



}
