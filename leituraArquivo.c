#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"

void leituraArquivo(Produtos **produto, int *ponteiroNumeroProdutos, double *ponteiroSaldo){
  int quantidade;
  FILE *arquivo = fopen("estoque.txt", "r"); //abrindo o arquivo para leitura
  if(arquivo==NULL){
    scanf("%d", &quantidade);
    /*printf("Erro ao abrir o arquivo para leitura dos dados.");
    exit(1);*/

    return;
  }
  int ch=fgetc(arquivo);
  if(ch==EOF){ //vê se o arquivo está vazio
    scanf("%d", &quantidade);
    /*int quant; //quantidade de espaços pra produtos que se deseja alocar
    scanf("%d", &quant);
    *produto = malloc(sizeof(Produtos)*quant);*/
  }
  else{
    rewind(arquivo);
    fscanf(arquivo, "%lf", ponteiroSaldo);
    fscanf(arquivo, "%d", ponteiroNumeroProdutos);
    *produto = malloc(sizeof(Produtos)*(*ponteiroNumeroProdutos));
    for(int i=0; i<*ponteiroNumeroProdutos; i++){
      fscanf(arquivo, "%s %d %lf", (*produto)[i].nome, &(*produto)[i].quantidade, &(*produto)[i].preco);
    }
  }
  fclose(arquivo);
}
