#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"

void modificarPreco(Produtos *produto);

void modificarPreco(Produtos *produto){
  int codigo;
  double precoNovo;
  scanf(" %d %lf", &codigo, &precoNovo);
  produto[codigo].preco=precoNovo;
}
