#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j;
    float *vet, aux;
    printf("Quantos valores serão digitados? ");
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
