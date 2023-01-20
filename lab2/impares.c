#include <stdio.h>
#include <locale.h>
#include <math.h>

void printImp(int a, int b){
    printf("\nValores ímpares presentes no intervalo: ");
    
    for(int i=a;i<=b;i++){
        if(i%2==1){
            printf("\n%d", i);
        }
    }
}


int main(){
    setlocale(LC_ALL,"Portuguese");
    int a,b;

    do{
    printf("Informe os intervalos para saber os números ímpares entre eles e cuidado, o primeiro valor tem que ser menor que o segundo: ");
    scanf("%d %d", &a,&b);
    }while(a>b);

    printImp(a,b);

return 0;
}