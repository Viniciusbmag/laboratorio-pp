#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float peso,altura,imc;

    printf("Informe o seu peso e altura: ");
    scanf("%f %f", &peso,&altura);

    imc=peso/(pow(altura,2));

    if(imc<16){
        printf("Seu imc é %f e você se encontra em perigo de vida.",imc);
    }

    if(imc>=16&&imc<17){
        printf("Seu imc é %f e você se encontra muito abaixo do peso.",imc);
    }

    if(imc>=17&&imc<18.5){
        printf("Seu imc é %f e você se encontra abaixo do peso.",imc);
    }

    if(imc>=18.5&&imc<25){
        printf("Seu imc é %f e você se encontra no peso normal.",imc);
    }

    if(imc>=25&&imc<30){
        printf("Seu imc é %f e você se encontra acima do peso.",imc);
    }

    if(imc>=30&&imc<35){
        printf("Seu imc é %f e você se encontra em Obesidade grau I.",imc);
    }

    if(imc>=35&&imc<40){
        printf("Seu imc é %f e você se encontra em Obesidade grau II.",imc);
    }

    if(imc>=40){
        printf("Seu imc é %f e você se encontra em Obesidade grau III.",imc);
    }

return 0;
}