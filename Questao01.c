#include <stdio.h>

int main(){

    int i=3,j=5;
    int *p, *q;


    p = &i;
    q = &j;

    printf("%d\n", &i == p); /*Imprimindo na tela o resultado é 1, logo verdadeiro*/
    printf("%d\n", *p - *q); /*Imprimindo na tela percebemos que o resultado é -2*/
    printf("%d\n", **&p); /*Imprimindo na tela temos o resultado do conteúdo de p, isto é 3, porque é uma referência
    de um ponteiro de um ponteiro */
    printf("%d\n", 3 - *p/(*q) + 7); /*O resulto é 10, pois por se tratar de ponteiros para inteiros o sistema apenas conseguirá
    identificar a parte inteira da divisão que é 0, somando 3+7+0, então temos 10.    */
    return 0;
}
