#include <stdio.h>

int main(){
    int i = 1, j = 2, *p, *q;

    p = i;
    printf("%p\n", p);
    q = &j;
    printf("%p\n", q);
    p = &*&i;
    printf("%p\n", p);
    /*i = (*&)j; - ATRIBUI��O ILEGAL*/
    i = *&j;
    printf("%p\n", i);
    i = *&*&j;
    printf("%p\n", i);
    q = *p;
    printf("%p\n", q);
    /*i = (*p)++ + *q; - ATRIBUI��O ILEGAL*/
    printf("%p\n", i);


}
