#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int Nprimos(int j){
    int aux=0;

    for(int i = 1; i <= j; i++){
        if(j % i == 0)
            aux++;
    }

    if(aux==2){
        return 1; 
    }
    
    else{
        return 0; 
    }
}


int main(){
    setlocale(LC_ALL,"Portuguese");
    int a,b,soma=0;

    printf("Informe o valores do intervalo A e B: ");
    scanf("%d %d", &a,&b);

    for(int j=a;j<=b;j++){
        if(Nprimos(j)==1){
            printf("\n%d", j);
            soma=soma+j;
        }
    }

    printf("Soma dos números primos: %d",soma);

return 0;
}