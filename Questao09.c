/*
9. Seja x um vetor de 4 elementos, declarado da forma TIPO x[4];. Suponha que depois da
declaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]).
Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo
int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os
valores de x+1, x+2 e x+3 se:

char - ocupa 1 byte
int - ocupa 2 bytes
float - ocupa 4 bytes
double - ocupa 8 bytes

TIPO x[4];

&x = 4092;

Quais serão os valores de x+1, x+2 e x+3 se (considerei que 4092 esteja em hexadecimal):

x for declarado como char?
    x+1 será igual a próxima posição mais 1 byte, isto é, o novo endereço seria 4093
    x+2 seria 4094
    x+3 seria 4095
x for declarado como int?
    x+1 será igual a próxima posição mais 2 bytes, isto é, o novo endereço seria 4094
    x+2 seria 4096
    x+3 seria 4098
x for declarado como float?
    x+1 será igual a próxima posição mais 4 bytes, isto é, o novo endereço seria 4096
    x+2 seria 409A
    x+3 seria 409E
x for declarado como double?
    x+1 será igual a próxima posição mais 8 bytes, isto é, o novo endereço seria 409A
    x+2 seria 40A2
    x+3 seria 40AA

*/
