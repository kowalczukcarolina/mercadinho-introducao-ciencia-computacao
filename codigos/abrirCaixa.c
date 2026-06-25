#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"

void abrirCaixa(int *ponteiroNumeroProdutos, Produtos **produto, double *ponteiroSaldo);

void abrirCaixa(int *ponteiroNumeroProdutos, Produtos **produto, double *ponteiroSaldo){
    FILE *arquivo;
    arquivo = fopen("dados_mercado.txt", "r");

    fscanf(arquivo, "%f", ponteiroSaldo);
    fscanf(arquivo, "%d", ponteiroNumeroProdutos);

    for(int i = 0; i<ponteiroNumeroProdutos; i++){
        fscanf(arquivo, "%s %d %lf", (*produto)[i].nome, (*produto)[i].quantidade, (*produto)[i].preco);
    }
    
    fclose(arquivo);

}