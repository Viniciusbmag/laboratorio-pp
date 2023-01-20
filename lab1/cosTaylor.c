#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define PI 3.141592

int fatorial(int x){
    for(int i=1;x>1;x--){
        x=x*i;
    }

return x;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n,fat=0;
    double x,taylor=0;

    printf("Informe o valor do limite da série de Taylor: ");
    scanf("%d",&n);

    printf("Informe o valor que será calculado na série cos(x*PI): ");
    scanf("%lf", &x);

    /*for(int i=0;i<n;i++){
        taylor=PI*(taylor+((pow(-1,i)*pow(x,(2*i)))/(fatorial(i))));
    }*/

    for(int i=0;i<n;i++){
        fat=2*i;
        taylor=taylor+pow(-1,i)*(pow((x*PI),(2*i))/fatorial(fat));
    }

    printf("cos(x*PI)= %lf\n",taylor);

return 0;
}