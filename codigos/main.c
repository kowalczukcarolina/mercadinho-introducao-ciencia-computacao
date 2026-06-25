#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"
#include "aumentarEstoque.c"
#include "consultarEstoque.c"
#include "finalizarDia.c"
#include "inserirProduto.c"
#include "modificarPreco.c"
#include "realizarVenda.c"
#include "consultarSaldo.c"


int main(void){
    int numeroProdutos = 0;
    int *ponteiroNumeroProdutos = NULL;
    Produtos *produto = NULL;
    double saldoCaixa = 100.0;
    char comando[3] = {0};

    ponteiroNumeroProdutos = &numeroProdutos;

    while(1){ //depois mexer no while para ter como sair da execução
        scanf("%s", comando); //lendo string comando - dado por 2 letras

        if(comando[0] == 'I' && comando[1] == 'P'){
            inserirProduto(ponteiroNumeroProdutos, &produto);
            /*printf("--- PRODUTO ADICIONADO ---\n");
            printf("Nome:       %s\n", produto[numeroProdutos - 1].nome);
            printf("Quantidade: %d\n", produto[numeroProdutos - 1].quantidade);
            printf("Preco:      R$ %lf\n", produto[numeroProdutos - 1].preco);
            free(produto);*/
        }
        else if(comando[0]=='A' && comando[1] == 'E'){
            //a função aumentarEstoque precisa do ponteiro simples (Produtos *) e o endereço do saldo do caixa
            //a variável produto já é um ponteiro simples (Produtos *produto), então passamos ela diretamente
            aumentarEstoque(produto, &saldoCaixa); 
        }
        else if(comando[0]=='M' && comando[1]=='P'){
            modificarPreco(&produto);
        }
        else if(comando[0]=='V' && comando[1]=='E'){
            realizarVenda(&produto, &saldoCaixa);
        }
        else if(comando[0]=='C' && comando[1]=='E'){
            consultarEstoque(&produto, &numeroProdutos);
        }   
        else if(comando[0]=='C' && comando[1]=='S'){
            consultarSaldo(&saldoCaixa);
        }
        else if (comando[0] == 'F' && comando[1] == 'E') {
            finalizarDia(produto, numeroProdutos, saldoCaixa);
        }
    }



}
