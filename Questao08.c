#include <stdio.h>


/*O primeiro c�digo mostra os valores contidos no vetor vet[]*/

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
}


/*O segundo c�digo mostra os endere�os em hexadecimal com letras mai�sculas do vetor vet[]*/
/*
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
}
*/
