#include <stdio.h>
#include <stdlib.h>
#include "funciones.c"

int main()
{
    float operando1=0, operando2=0;
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                operando1= operando();
                break;
            case 2:
                operando2= operando();
                break;
            case 3:
                Sumar(operando1,operando2);
                break;
            case 4:
                Restar(operando1,operando2);
                break;
            case 5:
                dividir(operando1,operando2);
                break;
            case 6:
                multiplicar(operando1,operando2);
                break;
            case 7:
                factorial(operando1);
                break;
            case 8:
                funciones(operando1,operando2);
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }
    return 0;
}

