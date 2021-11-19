#include <stdio.h>
#include <locale.h>

void pintarParede(float larg, float h, float metros);

int main(){
    setlocale(LC_ALL,"Portuguese"); /***/
    printf("12. O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e escreva um pequeno programa exemplificando o uso deste recurso.\n\n");
    printf("Ponteiro para função é uma forma de definir em tempo de execução qual função será executada sem precisar escrever o nome da função de forma explícita naquele ponto.\n\n");

    void (*ppp)(float,float,float) = pintarParede;
    float larg, h,metros;

    printf("Digite a largura da parede: ");
    scanf("%f", &larg);
    printf("\nDigite a altura da parede: ");
    scanf("%f", &h);
    printf("\nCom 1 litro de tinta você pinta quantos m^2?");
    scanf("%f", &metros);
    ppp(larg, h, metros);

    return 0;
}

void pintarParede(float larg, float h, float metros){
    float area;
    area = larg*h;
    printf("\nVocê precisará de %f litros para pintar %fm^2 de parede.", area/metros , area);
}
