#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i = 1, j = 2, *p, *q;

    printf("3. Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de atribuição são ilegais?\n");

    p = i;
    printf("Expressão 'p = i;' - resultado: %p | Legal\n", p);

    q = &j;
    printf("Expressão 'q = &j;' - resultado: %p | Legal\n", q);

    p = &*&i;
    printf("Expressão 'p = &*&i;' - resultado: %p | Legal\n", p);

    /*i = (*&)j;*/
    printf("Expressão 'i = (*&)j;' | ATRIBUIÇÃO ILEGAL\n", p);/*i = (*&)j; - ATRIBUIÇÃO ILEGAL*/

    i = *&j;
    printf("Expressão 'i = *&j;' - resultado: %p | Legal\n", i);

    i = *&*&j;
    printf("Expressão 'i = *&*&j;' - resultado: %p | Legal\n", i);

    q = *p;
    printf("Expressão 'q = *p;' - resultado: %p | Legal\n", q);

    /*i = (*p)++ + *q;*/
    printf("Expressão 'i = (*p)++ + *q;' | ATRIBUIÇÃO ILEGAL\n", i);/*i = (*p)++ + *q; - ATRIBUIÇÃO ILEGAL*/

}
