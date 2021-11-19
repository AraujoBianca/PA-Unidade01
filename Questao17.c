#include <stdio.h>

/*
17. Escreva uma fun��o em c que escreva em um vetor a soma dos elementos correspondentes de
outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usu�rio). Por exemplo,
se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3,
5, -3 e 1, o vetor de soma ter� valores resultantes iguais a 4, 8, -3 e -1. A fun��o deve receber 4
argumentos: os nomes dos tr�s vetores e o n�mero de elementos presentes em cada vetor
*/

void somar(int A[], int B[], int C[], int n);

int main(){
    void (*ps)(int, int, int, int) = somar;
    int n, i;
    printf("Digite quantos n�meros voc� digitar�: ");
    scanf("%d", &n);

    int v1[n], v2[n], v[n];

    printf("Digite os valores do primeiro vetor:\n");

    for (i = 0 ; i < n ; i++){
        printf("%d: ", i+1);
        scanf("%d", &v1[i]);
    }

    printf("\n");

    printf("Digite os valores do segundo vetor:\n");
    for (i = 0 ; i < n ; i++){
        printf("%d�: ", i+1);
        scanf("%d", &v2[i]);
    }

    printf("\n");

    for (i = 0 ; i < n ; i++){
        v[i]=0;
    }

    ps(v1,v2,v,n);


    return 0;
}

void somar(int A[], int B[], int C[], int n){
    int i;

    for (i = 0; i < n ; i++){
        C[i] = A[i] + B[i];
    }

    printf("Vetor soma: ");
    for (i = 0; i < n ; i++){
        printf("%d ", C[i]);
    }

}
