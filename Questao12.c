#include <stdio.h>

void pintarParede(float larg, float h, float metros);

int main(){

    /*Ponteiro para fun��o � uma forma de definir em tempo de execu��o qual fun��o ser� executada sem
    precisar escrever o nome da fun��o de forma expl�cita naquele ponto.*/

    void (*ppp)(float,float,float) = pintarParede;
    float larg, h,metros;

    printf("Digite a largura da parede: ");
    scanf("%f", &larg);
    printf("\nDigite a altura da parede: ");
    scanf("%f", &h);
    printf("\nCom 1 litro de tinta voc� pinta quantos m^2?");
    scanf("%f", &metros);
    ppp(larg, h, metros);

    return 0;
}

void pintarParede(float larg, float h, float metros){
    float area;
    area = larg*h;
    printf("\nVoc� precisar� de %f litros para pintar %fm^2 de parede.", area/metros , area);
}
