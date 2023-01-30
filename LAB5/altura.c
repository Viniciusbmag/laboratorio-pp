#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int cm(int x){
    if(x<10)return x*10;
    if(x>99)return cm(x/10);
    return x;
}

typedef struct{
    int metros;
    int centimentros;
}Altura;


int main(){
    setlocale(LC_ALL,"Portuguese");
    Altura a1;

    printf("Informe a altura no formato 1,71: ");
    scanf("%d.%d", &a1.metros,&a1.centimentros);

    a1.centimentros=cm(a1.centimentros);

    printf("Altura %dm%d",a1.metros,a1.centimentros);

return 0;
}