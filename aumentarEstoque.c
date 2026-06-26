#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"

/*
Aquisições feitas pelo dono do mercado (aumento do estoque) geram custo (interferem no caixa). 
O saldo pode ficar negativo
-> Se o dono garta dinheiro para comprarmais produto (AE), o saldo do caixa diminui
-> Implementar isso na função
*/


void aumentarEstoque(Produtos *produto, double *saldoCaixa){
    int codigoProcurado = 0;
    int quantidadeAdicionar = 0;
    
    // Formato: AE <código> <quantidade>
    scanf(" %d", &codigoProcurado); // Lendo o código do produto 
    scanf(" %d", &quantidadeAdicionar);//Lendo quantidade a ser adicionada

    produto[codigoProcurado].quantidade += quantidadeAdicionar;

    //vendo quanto custou o produto para o vendedor
    double custo = quantidadeAdicionar * produto[codigoProcurado].preco; 
    *saldoCaixa -= custo; //atualizando o saldo do caixa
}
