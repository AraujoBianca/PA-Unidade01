#include <stdio.h>

/*Foram feitas algumas alterações para uma melhor compreensão da saída do código:

Saída (após alterações):

 cont |     valor    |      valor     |     endereco     |     endereco     |
i = 0 | vet[0] = 1.1 | *(f + 0) = 1.1 | &vet[0] = 61FDE0 | (f + 0) = 61FDE0 |
i = 1 | vet[1] = 2.2 | *(f + 1) = 2.2 | &vet[1] = 61FDE4 | (f + 1) = 61FDE4 |
i = 2 | vet[2] = 3.3 | *(f + 2) = 3.3 | &vet[2] = 61FDE8 | (f + 2) = 61FDE8 |
i = 3 | vet[3] = 4.4 | *(f + 3) = 4.4 | &vet[3] = 61FDEC | (f + 3) = 61FDEC |
i = 4 | vet[4] = 5.5 | *(f + 4) = 5.5 | &vet[4] = 61FDF0 | (f + 4) = 61FDF0 |

Ou seja, o ponteiro f recebe as informações do vetor vet por referência passando a referencia a mesma informação
que o vetor vet, possuindo inclusive o mesmo endereço.

*/


int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf(" cont |     valor    |      valor     |     endereco     |     endereco     |");
  for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d | ",i);
        printf("vet[%d] = %.1f | ",i, vet[i]);
        printf("*(f + %d) = %.1f | ",i, *(f+i));
        printf("&vet[%d] = %X | ",i, &vet[i]);
        printf("(f + %d) = %X | ",i, f+i);
  }
}
