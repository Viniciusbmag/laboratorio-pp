#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <locale.h>

#define MAX 60

int Vogais(char palavra[]){
    char vogal[]="aeiouAEIOU";
    int contV=0,i,j;

    for(i=0;palavra[i] != '\0';i++){
        for(j=0;vogal[j]!='\0';j++){
            if(vogal[j]==palavra[i]){
                contV++;
                break;
            }
        }
    }

return contV;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    char palavra[MAX];

    printf("Informe a palavra: ");
    fgets(palavra,MAX, stdin);

    printf("Vogais presentes na palavra informada: %d", Vogais(palavra));

return 0;
}