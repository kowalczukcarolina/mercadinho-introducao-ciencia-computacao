#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"

void finalizarDia(Produtos *produto, int numeroProdutos, double saldoCaixa) {
    FILE *arquivo = fopen("estoque.txt", "w"); //abrindo o arquivo pra escrita (w=write)
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para salvar os dados.\n");
        return;
    }

    //Escrevendo o saldo do caixa e a quantidade de produtos nas primeiras linhas
    fprintf(arquivo, "%lf\n", saldoCaixa);
    fprintf(arquivo, "%d\n", numeroProdutos);

    //Escrevendo os dados de cada produto cadastrado
    for (int i = 0; i < numeroProdutos; i++) {
        //formatação:  %s para o nome (sem espaços), %d para quantidade, %.2lf para o preço
        fprintf(arquivo, "%s %d %.2lf\n", produto[i].nome, produto[i].quantidade, produto[i].preco);
    }

    //Fecha o arquivo com segurança
    fclose(arquivo);

    //Libera a memória alocada dinamicamente antes de fechar o programa
    if (produto != NULL) {
        free(produto);
    }

    //Encerra o programa com sucesso
    exit(0); 
}
