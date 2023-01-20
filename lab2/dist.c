#include <stdio.h>
#include <locale.h>
#include <math.h>

void euclidiana(float x1,float y1,float x2,float y2){
    float result;

    result=sqrt(pow(x1-x2,2)+pow(y1-y2,2));

    printf("Distância Euclidiana: %.3f", result);
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    float x1,y1,x2,y2;
    
    printf("Informe os valores da primeira coordenada: ");
    scanf("%f %f", &x1,&y1);
    
    printf("Informe os valores da segunda coordenada: ");
    scanf("%f %f", &x2,&y2);

    euclidiana(x1,y1,x2,y2);

return 0;
}