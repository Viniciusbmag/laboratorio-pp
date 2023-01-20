#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int primeiroInt,segundoInt;
    float divisao;

    printf("Informe dois valores inteiros: ");
    scanf("%d %d", &primeiroInt,&segundoInt);

    divisao=primeiroInt/segundoInt;

    printf("\nResultado da soma: %d", primeiroInt+segundoInt);
    printf("\nResultado da subtração: %d", primeiroInt-segundoInt);
    printf("\nResultado da multiplicação: %d", primeiroInt*segundoInt);
    printf("\nResultado da divisão: %f", divisao);
    printf("\nResultado do módulo entre eles: %d", primeiroInt%segundoInt);
    
return 0;
}