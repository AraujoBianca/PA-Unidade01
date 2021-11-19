#include <stdio.h>
#include <locale.h>

/*
A expressão "*(pulo + 2)" referencia o valor do terceiro elemento.

Saída do código abaixo:

3
5
000000000061FE10
000000000061FE08

*/


int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("6. Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o valor do terceiro elemento do vetor?\n\n");

    int pulo[] = {1, 2, 3, 4, 5};

    printf("%d\n", *(pulo + 2));
    printf("%d\n", *(pulo + 4));
    printf("%p\n", pulo + 4);
    printf("%p\n", pulo + 2);

    return 0;
}
