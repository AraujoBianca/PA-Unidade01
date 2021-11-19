#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("11. Suponha que as seguintes declarações tenham sido realizadas:\n\n");
    printf("float aloha[10], coisas[10][5], *pf, value = 2.2;\nint i=3;\n");
    printf("\nIdentifique quais dos seguintes comandos é válido ou inválido:\n");

    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;
    scanf("%f", &aloha);
    /*aloha = value";/*Há um erro nessa linha, pois temos uma aspas duplas entre value e o ponto e vírgula*/
    /*printf("%f", aloha);/*Apesar do sistema não sinalizar erro, a saída não foi corretamente apresentada*/
    coisas[4][4] = aloha[3];
    /*coisas[5] = aloha;/*A expressão da matriz não está completa.*/
    /*pf = value;/*Tipo incompatível, pois o pf é um ponteiro para float e o value é uma variável do tipo float*/
    pf = aloha;

    return 0;
}
