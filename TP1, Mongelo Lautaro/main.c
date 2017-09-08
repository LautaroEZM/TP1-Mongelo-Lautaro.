#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    float x;
    float y;
    int controlA =1;
    int controlB =1;
    int verifA=0;
    int verifB=0;


    while(seguir=='s')
    {
        system("cls");
        if(controlA==1)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando (A=%.2f)\n", x);
            verifA=1;
        }
        if (controlB==1)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando (B=%.2f)\n", y);
            verifB=1;

        }

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        printf("Elija una opcion por el numero indicado: ");
        scanf("%d",&opcion);
        system("cls");


        switch(opcion)
        {
        case 1:
            x=funcionDato();
            controlA=0;
            break;

        case 2:
            y=funcionDato();
            controlB=0;
            break;

        case 3:
            if(verifA==1 && verifB==1)
            {
                funcionSuma(x, y);
                system("pause");
            }
            else
            {
                printf("No ha ingresado correctamente los valores.\n Verifique haber ingresado correctamente el primer y el segundo operando");
                system("pause");

            }
            break;

        case 4:
            if(verifA==1 && verifB==1)
            {
                funcionResta(x, y);
                system("pause");
            }
            else
            {
                printf("No ha ingresado correctamente los valores.\n Verifique haber ingresado correctamente el primer y el segundo operando");
                system("pause");

            }
            break;

        case 5:
            if(verifA==1 && verifB==1)
            {
                funcionDiv(x, y);
                system("pause");
            }
            else
            {
                printf("No ha ingresado correctamente los valores.\n Verifique haber ingresado correctamente el primer y el segundo operando");
                system("pause");

            }
            break;

        case 6:
            if(verifA==1 && verifB==1)
            {

                funcionMult(x, y);
                system("pause");
            }
            else
            {
                printf("No ha ingresado correctamente los valores.\n Verifique haber ingresado correctamente el primer y el segundo operando");
                system("pause");

            }
            break;

        case 7:
            if(verifA==1)
            {
                funcionFact (x);
                system("pause");

            }
            else
            {
                printf("No ha ingresado correctamente los valores.\n Verifique haber ingresado correctamente el primer y el segundo operando");
                system("pause");

            }
            break;
        case 8:

            if(verifA==1 && verifB==1)
            {
                funcionSuma (x, y);
                funcionResta (x, y);
                funcionDiv (x, y);
                funcionMult (x, y);
                funcionFact (x);
                system("pause");

            }
            else
            {
                printf("No ha ingresado correctamente los valores.\n Verifique haber ingresado correctamente el primer y el segundo operando");
                system("pause");

            }
            break;
        case 9:
            seguir = 'n';
            break;
        }

    }

    return 0;
}
