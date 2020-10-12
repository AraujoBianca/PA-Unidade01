#include <stdio.h>


/*O primeiro código mostra os valores contidos no vetor vet[]*/

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
}


/*O segundo código mostra os endereços em hexadecimal com letras maiúsculas do vetor vet[]*/
/*
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
}
*/
