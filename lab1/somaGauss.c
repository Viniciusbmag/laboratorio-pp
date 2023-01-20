#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numero,x;

    do{
    printf("Informe um valor inteiro maior 1: ");
    scanf("%d", &numero);
    }while(numero<1);

    for(x=1;numero>1;numero--){
        x=x+numero;
    }

    printf("Resultado da soma: %d", x);
    
return 0;
}