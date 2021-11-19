#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("1. Seja o seguinte trecho de programa:\n");
    printf("\tint i=3,j=5;\n\tint *p, *q;\n\tp = &i;\n\tq = &j;\n");
    printf("Determine o valor das seguintes express�es:\n\n");

    int i=3,j=5;
    int *p, *q;

    p = &i;
    q = &j;

    printf("\nResultado de 'p == &i;': ");
    printf("%d\n", &i == p); /*Imprimindo na tela o resultado � 1, logo verdadeiro*/
    printf("\nResultado de '*p - *q;': ");
    printf("%d\n", *p - *q); /*Imprimindo na tela percebemos que o resultado � -2*/
    printf("\nResultado de '**&p;': ");
    printf("%d\n", **&p); /*Imprimindo na tela temos o resultado do conte�do de p, isto � 3, porque � uma refer�ncia de um ponteiro de um ponteiro */
    printf("\nResultado de '3 - *p/(*q) + 7;': ");
    printf("%d\n", 3 - *p/(*q) + 7); /*O resulto � 10, pois por se tratar de ponteiros para inteiros o sistema apenas conseguir�
    identificar a parte inteira da divis�o que � 0, somando 3+7+0, ent�o temos 10.    */
    return 0;
}
