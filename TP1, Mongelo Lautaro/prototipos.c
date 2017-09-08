#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"


float funcionDato()
{
    float a;
    printf("Ingrese un numero: ");
    scanf("%f", &a);
    return a;
}

float funcionSuma(float a, float b)
{
    float suma = a+b;
    printf("La suma de %.2f y %.2f es igual a: %.2f \n",a,b,suma);
    return suma;
}

float funcionResta(float a, float b)
{
    float resta = a-b;
    printf("La resta de %.2f menos %.2f es igual a: %.2f \n",a,b,resta);
    return resta;
}

float funcionDiv(float a, float b)
{
    float div;
    if(b==0)
    {
        printf("No puede dividir un numero por 0, vuelva a ingresar la variable B y reintentelo\n");
        system("pause");
    }
    else
    {
        div = a/b;
        printf("La division del dividendo %.2f por el divisor %.2f es igual a: %.2f \n",a,b,div);
    }
    return div;

}

float funcionMult(float a, float b)
{
    float mult= a*b;
    printf("La multiplicacion de %.2f por %.2f es igual a: %.2f \n",a,b,mult);
    return mult;
}

long long int funcionFact(int a)
{
    long long int fact=1;
    int i;
    if(a<1)
    {
        printf("No puede ingresar un numero negativo.\n Reingrese el primer operando.");
    }
    else
    {
        for (i=a; i>1; i--)
        {
            fact=fact*i;
        }
        printf("El factorial de %d es: %lld \n",a,fact);
        return fact;
    }

}
