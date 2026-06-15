#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"

void inserirProduto(int *ponteiroNumeroProdutos, Produtos **produto);

void inserirProduto(int *ponteiroNumeroProdutos, Produtos **produto){
    //preciso passar como ponteiro de ponteiro para o verdadeiro valor de produto seja alterado
    int tamanhoVetorProdutos = 0;
        (*ponteiroNumeroProdutos)++;//++ tem prioridade sobre ponteiro
        tamanhoVetorProdutos = (*ponteiroNumeroProdutos)*sizeof(Produtos); //multiplicando quant bits da struct pela quant de bits do vetor


        *produto = realloc((*produto), tamanhoVetorProdutos);//realocando o novo tamanho
        scanf(" %s", (*produto)[(*ponteiroNumeroProdutos-1)].nome);
        scanf(" %d", &(*produto)[(*ponteiroNumeroProdutos-1)].quantidade);
        scanf(" %lf", &(*produto)[(*ponteiroNumeroProdutos-1)].preco);

}