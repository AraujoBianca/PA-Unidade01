#include <stdio.h>

int main(){
    int mat[4], *p, x;

    p = mat + 1; /*Aqui o sistema pega o 1º endereço por referência de maf e depois anda 1 byte do tipo int para chegar
    a referência mat[1] e atribuir essa referência a p */
    /*p = mat++; /* - apresenta erro, pois é necessário informar qual é a posição que irá acrescentar ou */
    /*p = ++mat; /* - não há valor em mat[0] para se acrescedido mais 1*/
    x = (*mat)++; /*O sistema primeiro recupera o valor de *mat e depois soma*/
    printf("%d", x);
    return 0;
}
