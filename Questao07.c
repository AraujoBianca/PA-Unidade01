#include <stdio.h>

int main(){
    int mat[4], *p, x;

    p = mat + 1; /*Aqui o sistema pega o 1� endere�o por refer�ncia de maf e depois anda 1 byte do tipo int para chegar
    a refer�ncia mat[1] e atribuir essa refer�ncia a p */
    /*p = mat++; /* - apresenta erro, pois � necess�rio informar qual � a posi��o que ir� acrescentar ou */
    /*p = ++mat; /* - n�o h� valor em mat[0] para se acrescedido mais 1*/
    x = (*mat)++; /*O sistema primeiro recupera o valor de *mat e depois soma*/
    printf("%d", x);
    return 0;
}
