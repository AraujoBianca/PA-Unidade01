/*2. Mostre o que ser� impresso por programa supondo que i ocupa o endere�o 4094 na mem�ria.*/

/*Considerando o endere�o de i como 4094 que � igual a FFE em hexadecimal, temos:*/
int i=5, *p;
p = &i; // p = 4094
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4); /*Sa�da seria: ffe 7 5  15 9*/
