#include <stdio.h>
#include <locale.h>

typedef struct {
    int dia;
    int mes;
    int ano;
}Data;

int main(){
    setlocale(LC_ALL,"Portuguese");
    Data d1;

    const char strmes[13][4] = {
        "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
    };

    printf("Informe a data no formato D/M/YYYY: ");
    scanf("%02d/%02d/%d",&d1.dia,&d1.mes,&d1.ano);

    printf("\n%02d.%02d.%d", d1.dia,d1.mes,d1.ano);
    printf("\n%02d-%02d-%d", d1.mes,d1.dia,d1.ano);
    printf("\n%02d/%02d/%d%d", d1.dia,d1.mes,(d1.ano%100),(d1.ano%10));
    printf("\n%02d%s%d", d1.dia,strmes[d1.mes],d1.ano);

return 0;
}