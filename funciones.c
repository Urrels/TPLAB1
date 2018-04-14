#ifndef FUNCIONES_C_INCLUDED
#define FUNCIONES_C_INCLUDED

float operando()
{
    float x;
    char y;
    printf("Ingrese Operando \n");
    scanf("%f",&x);

    if ( y )

    {
        printf("Error, solamente se pueden ingresar valores numericos");
    }


    return x;
}

void Sumar (float a,float b)
{
    float suma;
    suma = a + b;

    printf("El resultado de la suma es = %.2f \n",suma);

}

void Restar(float a,float b)
{
    float resta;
    resta = a - b;

    printf("El resultado de la resta es = %.2f \n",resta);

}

void dividir (float a,float b)
{

    float division;
    division=a / b;

    if(b!=0)
    {
            printf("El resultado de la division es = %.3f \n",division);
    }

    else
    {
        printf("Resultado Division= ERROR, divisor 0 \n");
    }
}
void multiplicar (float a,float b)
{
    float multiplicacion;
    multiplicacion=a*b;

    printf("El resultado de la multiplicacion es = %.2f \n",multiplicacion);

}

void factorial(float a)
{

    float factA;

    factA=a;

    if(a>0)
    {
        for( int i=1; i<a ; i++)
        {
            factA = factA * (a-i);
        }

        printf("Factorial A= %.f \n",factA);
    }

    else if(a==0)
    {
            printf("Factorial A= 1\n");
    }

    else
    {
        printf("Factorial A= error, el numero debe ser mayor cero.\n");
    }


}

void funciones (float a,float b)
{
                Sumar(a,b);
                Restar(a,b);
                dividir(a,b);
                multiplicar(a,b);
                factorial(a);
}

#endif // FUNCIONES_C_INCLUDED
