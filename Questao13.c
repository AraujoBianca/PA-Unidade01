#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("13. Implemente em linguagem C uma fun��o em um programa de computador que leia n valores do tipo float e os apresente em ordem crescente. Utilize aloca��o din�mica de mem�ria para realizar a tarefa.\n\n");

    int n, i, j;
    float *vet, aux;

    printf("Quantos valores ser�o digitados? ");
    scanf("%d", &n);

    vet = malloc(n*sizeof(float));

    for(i = 0; i < n; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &vet[i]);
    }

    printf("\n");

    for (i=0 ; i < n ; i++){
       for (j = i; j < n; j++){
        if(vet[i]>vet[j]){
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
        }
      }
    }

    for(i = 0; i < n; i++){
        printf("%f ", vet[i]);
    }

    free(vet);
    return 0;
}
