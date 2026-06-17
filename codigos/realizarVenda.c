#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"

void realizarVenda(Produtos **produto, double *ponteiroSaldo);

void realizarVenda(Produtos **produto, double *ponteiroSaldo){
    int codigo = 0;
    double compraAtual = 0;

    while(1){
        scanf(" %d", &codigo);

        if(codigo == -1){
            break;
        }
        (*produto)[codigo].quantidade = (*produto)[codigo].quantidade - 1;
        *ponteiroSaldo = *ponteiroSaldo + (*produto)[codigo].preco;

        printf("%s ", (*produto)[codigo].nome);
        printf("%.2lf \n", (*produto)[codigo].preco);
        compraAtual = compraAtual + (*produto)[codigo].preco;
    }

    printf("Total: %.2lf\n", compraAtual);
    printf("--------------------------------------------------\n");

}