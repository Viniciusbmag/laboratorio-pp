#include <stdio.h>
#include <locale.h>

int mdc(int n1,int n2){
    int aux;

    do{
        aux=n1%n2;

        n1=n2;
        n2=aux;
    }while(aux!=0);

return n1;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1,n2;

    printf("Informe os valores para calcular o mdc: ");
    scanf("%d %d", &n1,&n2);

    printf("O mdc dos valores informado é: %d",mdc(n1,n2));

return 0;
}
