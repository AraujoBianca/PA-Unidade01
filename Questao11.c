#include <stdio.h>

int main(){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;
    scanf("%f", &aloha);
    /*aloha = value";/*H� um erro nessa linha, pois temos uma aspas duplas entre value e o ponto e v�rgula*/
    /*printf("%f", aloha);/*Apesar do sistema n�o sinalizar erro, a sa�da n�o foi corretamente apresentada*/
    coisas[4][4] = aloha[3];
    /*coisas[5] = aloha;/*A express�o da matriz n�o est� completa.*/
    /*pf = value;/*Tipo incompat�vel, pois o pf � um ponteiro para float e o value � uma vari�vel do tipo float*/
    pf = aloha;

    return 0;
}
