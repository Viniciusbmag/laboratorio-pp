#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int binario_decimal(int binario){
    int decimal = 0, i = 0, resto;
   
    while (binario != 0) {
        resto = binario % 10;
        binario /= 10;
        decimal += resto * pow(2, i);
        ++i;
    }

return decimal;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    unsigned int binario;

    printf("Entre com um número binário para ser convertido em decimal: ");
    scanf("%d",&binario);

    printf("Decimal: %d", binario_decimal(binario));
    
return 0;
}