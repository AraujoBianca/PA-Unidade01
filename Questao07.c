#include <stdio.h>

int main(){
    int mat[4], *p, x;

    p = mat + 1; /*Aqui o sistema pega o 1� endere�o por refer�ncia de maf e depois anda 1 byte do tipo int para chegar
    a refer�ncia mat[1] e atribuir essa refer�ncia a p */
    /*p = mat++; /* - apresenta erro, pois mat � um array e n�o podemos alterar o endere�o de um array*/
    /*p = ++mat; /* - apresenta erro, pois mat � um array e n�o podemos alterar o endere�o de um array*/
    x = (*mat)++; /*O sistema primeiro recupera o valor de *mat e depois faz o incremento*/
    return 0;
}
