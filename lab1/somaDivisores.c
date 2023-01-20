#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n,i,x=0;

    printf("Informe um valor inteiro: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf(" %d ", i);
            x=x+i;
        }
    }

    printf("A soma dos divisores é %d",x);

return 0;
}