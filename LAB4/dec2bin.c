#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void binario(unsigned long n){
    if(n == 0)
        printf("%d", n);

    else{
        binario(n/2);
        printf("%d", n % 2);
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    unsigned long n;

    printf("Digite um valor decimal: ");
    scanf("%llu",&n);

    binario(n);

return 0;
}