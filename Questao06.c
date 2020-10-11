#include <stdio.h>

/*
A expressão "*(pulo + 2)" referencia o valor do terceiro elemento.

Saída do código abaixo:

3
5
000000000061FE10
000000000061FE08

*/


int main(){
    int pulo[] = {1, 2, 3, 4, 5};

    printf("%d\n", *(pulo + 2));
    printf("%d\n",*(pulo + 4));
    printf("%p\n",pulo + 4);
    printf("%p\n",pulo + 2);

    return 0;
}
