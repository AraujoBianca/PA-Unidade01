#include <stdio.h>

int main(){

    int i=3,j=5;
    int *p, *q;


    p = &i;
    q = &j;

    printf("%d\n", &i == p); /*Imprimindo na tela o resultado � 1, logo verdadeiro*/
    printf("%d\n", *p - *q); /*Imprimindo na tela percebemos que o resultado � -2*/
    printf("%d\n", **&p); /*Imprimindo na tela temos o resultado do conte�do de p, isto � 3, porque � uma refer�ncia
    de um ponteiro de um ponteiro */
    printf("%d\n", 3 - *p/(*q) + 7); /*O resulto � 10, pois por se tratar de ponteiros para inteiros o sistema apenas conseguir�
    identificar a parte inteira da divis�o que � 0, somando 3+7+0, ent�o temos 10.    */
    return 0;
}
