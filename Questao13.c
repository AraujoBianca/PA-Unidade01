#include <stdio.h>

int main(){
    int n, i;
    printf("Quantos valores serão digitados? ");
    scanf("%d", &n);

    float vet[n];

    for(i = 0; i < n; i++){
        scanf("%f", &vet[i]);
    }

    printf("\n");

    for(i = 0; i < n; i++){
        printf("%f ", vet[i]);
    }

    return 0;
}
