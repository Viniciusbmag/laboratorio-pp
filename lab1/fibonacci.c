#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int posicao,x=0,y=1,aux,i;

    printf("Informe a posição do máximo termo para Fibonacci: ");
    scanf("%d", &posicao);

    switch(posicao){
        case 1:
            printf("Série de Fibonacci: ");
            printf("\n%d", x);
            break;

        case 2:
            printf("Série de Fibonacci: ");
            printf("\n%d\n%d\n", x,y);
            break;

        case 3 ... 50000:
            printf("Série de Fibonacci: ");
            printf("\n%d\n%d\n", x,y);

            for(i=2;i<=posicao-1;i++){
                aux=x+y;
                x=y;
                y=aux;
                printf("%d\n", aux);
            }
            break;
    }

return 0;
}









