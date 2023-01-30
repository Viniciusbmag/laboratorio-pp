#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 50

int cm(int x){
    if(x<10)return x*10;
    if(x>99)return cm(x/10);

return x;
}

typedef struct {
    int dia;
    int mes;
    int ano;

}Data;

typedef struct {
    int metros;
    int centimentros;

}Altura;
    
typedef struct {
    char nome[TAM];
    Data D;
    Altura A;
    float peso;

}Cadastro;


int main(){
    setlocale(LC_ALL,"Portuguese");

    int x=0,i=0;

    const char strmes[13][4] = {
        "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
    };

    printf("Informe quantas pessoas você deseja cadastrar: ");
    scanf("%d", &x);

    Cadastro C[x];

    do{
        printf("Informe o nome para cadastro: ");
        fgets(C[i].nome,TAM, stdin);

        printf("Informe a data de nascimento: ");
        scanf("%d/%d/%d", &C[i].D.dia,&C[i].D.mes,&C[i].D.ano);

        printf("Informe a altura: ");
        scanf("%d.%d", &C[i].A.metros,&C[i].A.centimentros);

        printf("Informe o peso: ");
        scanf("%f", &C[i].peso);

        i++;

    }while(i!=x);

    for(int i=0;i<=x;i++){
        C[i].A.centimentros=cm(C[i].A.centimentros);
        printf("\n%s; %02d%s%d; %d.%d; %f", C[i].nome,C[i].D.dia,strmes[C[i].D.mes],C[i].D.ano,C[i].A.metros,C[i].A.centimentros,C[i].peso);
    }
    
return 0;
}