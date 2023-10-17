#include <stdio.h>
#include <stdlib.h>

int soma (int n1, int n2){
    return n1 + n2;
}

int main()
{
    char operacao;
    int numero1, numero2;
    printf("Bem vindo ao programa Calculadora Basica:/n");
    printf("Forneca a operacao que sera utilizada: + (soma), - (subtração), * (multiplicação), / (divisão)/n");
    scanf("%c", &operacao);
    printf("Forneca o primeiro numero inteiro:/n");
    scanf("%d", &numero1);
    printf("Forneca o segundo numero inteiro:/n");
    scanf("%d", &numero2);
    return 0;
}
