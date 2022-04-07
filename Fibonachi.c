#include<stdio.h>
int ini=0;
int ini2=1;
int sum=0;
int fibonacci(){
    ini = ini2;
    ini2= sum;
    sum= ini+ini2;
    return sum;
}

int main()
{
    int numero;
    int i;
    printf("Ingresa un numero");
    scanf("%i", &numero);
    for( i =0; i < numero; i++)
    {
        printf("%d\n",fibonacci());
    }

    return 0;
}

