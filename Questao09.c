/*
Quest�o 09:

char - ocupa 1 byte
int - ocupa 2 bytes
float - ocupa 4 bytes
double - ocupa 8 bytes

TIPO x[4];

&x = 4092;

Quais ser�o os valores de x+1, x+2 e x+3 se (considerei que 4092 esteja em hexadecimal):

x for declarado como char?
    x+1 ser� igual a pr�xima posi��o mais 1 byte, isto �, o novo endere�o seria 4093
    x+2 seria 4094
    x+3 seria 4095
x for declarado como int?
    x+1 ser� igual a pr�xima posi��o mais 2 bytes, isto �, o novo endere�o seria 4094
    x+2 seria 4096
    x+3 seria 4098
x for declarado como float?
    x+1 ser� igual a pr�xima posi��o mais 4 bytes, isto �, o novo endere�o seria 4096
    x+2 seria 409A
    x+3 seria 409E
x for declarado como double?
    x+1 ser� igual a pr�xima posi��o mais 8 bytes, isto �, o novo endere�o seria 409A
    x+2 seria 40A2
    x+3 seria 40AA

*/
