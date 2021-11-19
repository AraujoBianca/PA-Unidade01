#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i = 1, j = 2, *p, *q;

    printf("3. Se i e j s�o vari�veis inteiras e p e q ponteiros para int, quais das seguintes express�es de atribui��o s�o ilegais?\n");

    p = i;
    printf("Express�o 'p = i;' - resultado: %p | Legal\n", p);

    q = &j;
    printf("Express�o 'q = &j;' - resultado: %p | Legal\n", q);

    p = &*&i;
    printf("Express�o 'p = &*&i;' - resultado: %p | Legal\n", p);

    /*i = (*&)j;*/
    printf("Express�o 'i = (*&)j;' | ATRIBUI��O ILEGAL\n", p);/*i = (*&)j; - ATRIBUI��O ILEGAL*/

    i = *&j;
    printf("Express�o 'i = *&j;' - resultado: %p | Legal\n", i);

    i = *&*&j;
    printf("Express�o 'i = *&*&j;' - resultado: %p | Legal\n", i);

    q = *p;
    printf("Express�o 'q = *p;' - resultado: %p | Legal\n", q);

    /*i = (*p)++ + *q;*/
    printf("Express�o 'i = (*p)++ + *q;' | ATRIBUI��O ILEGAL\n", i);/*i = (*p)++ + *q; - ATRIBUI��O ILEGAL*/

}
