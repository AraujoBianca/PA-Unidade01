#include <stdio.h>

void somar(int A[], int B[], int C[], int n);

int main(){
    void (*ps)(int, int, int, int) = somar;
    int n, i;
    printf("Digite quantos números você digitará: ");
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
        printf("%dº: ", i+1);
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
