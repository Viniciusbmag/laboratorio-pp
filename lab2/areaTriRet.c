#include <stdio.h>
#include <locale.h>
#include <math.h>

float distEarea(float xA,float yA,float xB,float yB,float xC,float yC){
    float a,b;
    float area;

    b=sqrt(pow(xA-xC,2)+pow(yA-yC,2));
    a=sqrt(pow(xB-xC,2)+pow(yB-yC,2));

    area=(b*a)/2;

return area;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    float xA,yA,xB,yB,xC,yC;

    printf("Informe os valores das coodernadas do ponto A do triângulo: ");
    scanf("%f %f", &xA,&yA);

    printf("Informe os valores das coordenadas do ponto B do triângulo: ");
    scanf("%f %f", &xB,&yB);

    xC=xB;
    yC=yA;

    printf("A área do triângulo é %.2f", distEarea(xA,yA,xB,yB,xC,yC));

return 0;
}