#include <stdio.h>
#include <locale.h>

int main(){ 
    setlocale(LC_ALL,"Portuguese");
    int n;
    float x,y;

    printf("Informe um valor inteiro positivo: ");
    scanf("%d", &n);

    do{ 
        if(n%2==0){
            x=n/2;
            n=x;
        }
        else{
            x=3*n+1;
            n=x;
        }
        y=y+x;
    }while(x!=1);

    printf("%f", y);

return 0;
}