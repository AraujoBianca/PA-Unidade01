#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("11. Suponha que as seguintes declara��es tenham sido realizadas:\n\n");
    printf("float aloha[10], coisas[10][5], *pf, value = 2.2;\nint i=3;\n");
    printf("\nIdentifique quais dos seguintes comandos � v�lido ou inv�lido:\n");

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
