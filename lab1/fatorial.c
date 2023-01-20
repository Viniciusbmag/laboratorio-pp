#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numero,x,y;

    do{
    printf("Informe um valor inteiro maior 1: ");
    scanf("%d", &numero);
    }while(numero<1);    
    
    y=numero;

    for(x=1;numero>1;numero--){
        x=x*numero;
    }
    
    printf("Fatorial de %d!: %d", y, x);

return 0;
}