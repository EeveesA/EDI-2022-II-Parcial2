#include<stdio.h>
#include<string.h>
#define MAX 999
int palindromo(char cadena[MAX], int inicio, int longitud);
int main()
{
    char cadena[MAX];
    int inicio=0;
    int longitud;
    int fin;

    printf("Escribe una cadena\n");
    scanf("%s",cadena);
    longitud = strlen(cadena);

    for (fin=longitud-1; cadena[fin]==cadena[inicio]&& fin>=0; inicio++,fin--);
    if(inicio==longitud) {
        printf("1");
    }else{
        printf("0");
    }





}