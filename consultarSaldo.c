#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"

void consultarSaldo(double *ponteiroSaldo);

void consultarSaldo(double *ponteiroSaldo){
    printf("Saldo:  %.2lf\n", *ponteiroSaldo);
    printf("--------------------------------------------------\n");
}