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
    char palavra[MAX];
    char aux[MAX];

    printf("Informe a palavra: ");
    fgets(palavra,MAX, stdin);

    inverter(palavra);

    printf("\nPALAVRA INVERTIDA: %s\n", palavra);

    maiusculo(palavra,aux);

    printf("\nPALAVRA INVERTIDA E COM TODAS AS LETRAS EM MAIUSCULO: %s\n", aux);
        
return 0;
}