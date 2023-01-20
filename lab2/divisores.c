#include <stdio.h>
#include <locale.h>
#include <math.h>

void divisores(int n){
    printf("DIVISORES DE %d", n);

    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("\n%d", i);
        }

    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n;

    printf("Informe um valor inteiro: ");
    scanf("%d", &n);

    divisores(n);

return 0;
}