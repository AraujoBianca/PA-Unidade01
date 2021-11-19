#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("10. Implemente um programa de computador para testar estas suposições e compare as respostas oferecidas pelo programa com as respostas que você idealizou.\n\n");
    printf("O tamanho no meu pc dos tipos dos dados: \n");
    printf("\tSize of char: %d\n", sizeof(char));
    printf("\tSize of int: %d\n", sizeof(int));
    printf("\tSize of float: %d\n", sizeof(float));
    printf("\tSize of double: %d\n", sizeof(double));
    printf("\n");

    int i;

    char a[4], *p;
    int b[4], *q;
    float c[4], *r;
    double d[4], *s;

    p = a;
    q = b;
    r = c;
    s = d;

    for ( i = 0; i < 4; i++){
        printf("%p ", p + i);
    }
    printf("\n");

    for ( i = 0; i < 4; i++){
        printf("%p ", q + i);
    }
    printf("\n");

    for ( i = 0; i < 4; i++){
        printf("%p ", r + i);
    }
    printf("\n");

    for ( i = 0; i < 4; i++){
        printf("%p ", s + i);
    }
    printf("\n");

    printf("\nConforme observado a resposta idealizada na questão anterior seguiu a lógica operacional do meu computador.\n");
}
