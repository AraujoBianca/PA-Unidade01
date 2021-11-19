/*2. Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.*/

/*Considerando o endereço de i como 4094 que é igual a FFE em hexadecimal, temos:*/
int i=5, *p;
p = &i; // p = 4094
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4); /*Saída seria: ffe 7 5  15 9*/
