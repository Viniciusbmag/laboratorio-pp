#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

void inverter(char vet[]){
    int i, aux, fim, tam = strlen(vet);

    fim = tam - 1;

    for(i = 0; i < tam/2; i++){
        aux = vet[i];
        vet[i] = vet[fim];
        vet[fim] = aux;
        fim--;
    }
}

void maiusculo(char s1[],char s2[]){
    int i=0;

    while(s1[i]!='\0'){
        s2[i]=toupper(s1[i]);
        i++;
    }
    
    s2[i]='\0';
}


int main(){
    setlocale(LC_ALL,"Portuguese");
    int valor=0;
    char palavra[MAX];
    char inversa[MAX];
    char aux[MAX];
    char aux2[MAX];

    printf("Informe a palavra: ");
    fgets(palavra,MAX, stdin);

    inversa[MAX]=palavra[MAX];

    inverter(inversa);

    maiusculo(inversa,aux);
    maiusculo(palavra,aux2);

    valor=strcmp(aux,aux2);

    if(valor==0){
        printf("É um palíndromo.");
    }
    else{
        printf("Não é um palíndromo.");
    }

return 0;
}