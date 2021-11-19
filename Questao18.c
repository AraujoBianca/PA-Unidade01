#include <stdio.h>
#include <locale.h>

/*
18. Crie uma função capaz de realizar multiplicação matricial da forma C=A B. A função deve
receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A
e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas
de B). O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar
sua implementação, capaz de utilizar a função de multiplicação e imprimir as três matrizes. A
função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal
*/

void multMatriz(int linA, int colA,  int colB, float A[][colA], float B[][colB], float C[][colB]);
void imp(int linA, int colA,  int colB, float A[][colA], float B[][colB], float C[][colB]);

int main(){
    setlocale(LC_ALL, "Portuguese");/*habilita a acentuação para o português*/
    int i, j, linA, colA, colB;

    do{
        printf("Digite quantas linhas terá a matriz A: ");
        scanf("%d", &linA);
    }while(linA < 1);

    do{
        printf("Digite quantas colunas terá a matriz A: ");
        scanf("%d", &colA);
    }while(linA < 1);

    printf("\nPara realizar a multiplicação matricial é necessário que a coluna de A seja igual a linha de B, então só precisamos das colunas de B.\n");

    do{
        printf("\nDigite quantas colunas terá a matriz B: ");
        scanf("%d", &colB);
    }while(linA < 1);

    float A[linA][colA], B[colA][colB], C[linA][colB];

    printf("\nDigite os valores relacionados a matriz A:\n");

    for (i = 0 ; i < linA; i++){
        for (j = 0; j < colA ; j++){
            printf("\nDigite o elemento da matriz A[%d][%d]: ", i+1, j+1);
            scanf("%f", &A[i][j]);
        }
    }

    printf("\nDigite os valores relacionados a matriz B:\n");

    for (i = 0 ; i < colA; i++){
        for (j = 0; j < colB ; j++){
            printf("\nDigite o elemento da matriz B[%d][%d]: ", i+1, j+1);
            scanf("%f", &B[i][j]);
        }
    }

    for (i = 0 ; i < linA; i++){
        for (j = 0; j < colB ; j++){
            C[i][j] = 0;
        }
    }

    multMatriz(linA, colA, colB , A, B, C);

    imp(linA, colA, colB , A, B, C);

    return 0;
}

void multMatriz(int linA, int colA,  int colB, float A[][colA], float B[][colB], float C[][colB]){
    int i, j, k;

    for (k = 0; k < linA; k++){
        for (j = 0 ; j < colB ; j++){
            for(i = 0 ; i < colA ; i++){
                C[k][j] = C[k][j] + A[j][i]*B[i][j];
            }
        }
    }
}

void imp(int linA, int colA,  int colB, float A[][colA], float B[][colB], float C[][colB]){
    int i, j;
    printf("\nA:\n");
    for (i = 0 ; i < linA; i++){
        printf("[");
        for (j = 0; j < colA ; j++){
            printf(" %f ", A[i][j]);
        }
        printf("]\n");
    }
    printf("\nB:\n");
    for (i = 0 ; i < colA; i++){
        printf("[");
        for (j = 0; j < colB ; j++){
            printf(" %f ", B[i][j]);
        }
        printf("]\n");
    }

    printf("\nMatriz C:\n");
    for (i = 0 ; i < linA; i++){
        printf("[");
        for (j = 0; j < colB ; j++){
            printf(" %f ", C[i][j]);
        }
        printf("]\n");
    }

}
