#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"

void consultarEstoque(Produtos **produto, int *ponteiroNumeroProdutos){
    for(int i = 0; i<*ponteiroNumeroProdutos; i++){
        printf("%s ", i);
        printf("%s ", (*produto)[i].nome);
        printf("%d\n", (*produto)[i].quantidade);
    }

    printf("--------------------------------------------------");

}