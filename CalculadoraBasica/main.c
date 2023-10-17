#include <stdio.h>
#include <stdlib.h>

float soma (int n1, int n2){
    float resultado;
    resultado = n1+n2;
    return resultado;
}

float subtracao (int n1, int n2){
    float resultado;
    resultado = n1 - n2;
    return resultado;
}

float multiplicacao (int n1, int n2){
    float resultado;
    resultado = n1 * n2;
    return resultado;
}

float divisao (int n1, int n2){
    float resultado;
    resultado = n1 / n2;
    return resultado;
}

int main()
{
    char operacao;
    int numero1, numero2;
    float resultado;
    printf("Bem vindo ao programa Calculadora Basica:\n");
    printf("Forneca a operacao que sera utilizada: + (soma), - (subtração), * (multiplicação), / (divisão)\n");
    scanf("%c", &operacao);
    printf("Forneca o primeiro numero inteiro:\n");
    scanf("%d", &numero1);
    printf("Forneca o segundo numero inteiro:\n");
    scanf("%d", &numero2);

    switch(operacao){
        case '+': resultado = soma(numero1, numero2);
        break;
        case '-': resultado = subtracao(numero1, numero2);
        break;
        case '*': resultado = multiplicacao(numero1, numero2);
        break;
        case '/': resultado = divisao(numero1, numero2);
        break;
        default: resultado = 0;
    }

    printf("O resultado da operacao foi: %f\n", resultado);
}
