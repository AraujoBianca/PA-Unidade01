#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("7. Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas? Justifique.\n\n");

    int mat[4], *p, x;

    p = mat + 1; /*Aqui o sistema pega o 1º endereço por referência de maf e depois anda 1 byte do tipo int para chegar
    a referência mat[1] e atribuir essa referência a p */
    /*p = mat++; /* - apresenta erro, pois mat é um array e não podemos alterar o endereço de um array*/
    /*p = ++mat; /* - apresenta erro, pois mat é um array e não podemos alterar o endereço de um array*/
    x = (*mat)++; /*O sistema primeiro recupera o valor de *mat e depois faz o incremento*/
    return 0;
}
