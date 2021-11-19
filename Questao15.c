#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*C�digo da quest�o 14 e 15 iguais, pois aproveitei o mesmo c�digo para as implementa��es solicitadas*/

int compararCrescente(const void * a, const void * b){
    if (*(float*)a == *(float*)b){ /* Nessa linha eu converto o void * para p tipo do vetor para o qsort que � float, se repete abaixo*/
        return 0;
    } else {
        if (*(float*)a < *(float*)b){
            return -1; /* a vem antes que b */
        } else {
            return 1; /* a vem depois que b */
        }
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");/*habilita a acentua��o para o portugu�s*/

    int n, i;

    printf("Quantos valores ser�o digitados? ");
    scanf("%d", &n);

    float vet[n];

    for (i = 0 ; i < n ; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &vet[i]);
    }

    qsort(vet, n, sizeof(float), compararCrescente);

    printf("Vetor ordenador: ");
    for (i = 0 ; i < n ; i++){
        printf("%f ", vet[i]);
    }

    printf("\n");

    return 0;
}
