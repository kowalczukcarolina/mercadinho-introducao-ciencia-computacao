#include <stdio.h>
#include <stdlib.h>

#ifndef PRODUTOS_H
#define PRODUTOS_H


typedef struct{
    char nome[100];
    int quantidade;
    double preco;
}Produtos;

#endif