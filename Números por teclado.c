#include <stdio.h>

int main()
{
    int num, anterior;
    int contador = 0;
    int maxContador = 0;
    int numeroMasRepetido;
    int total = 0;

    printf("Ingresa numeros (0 para terminar):\n");

    scanf("%d", &anterior);

    if(anterior != 0)
    {
        contador = 1;
        total = 1;
    }

    while(1)
    {
        scanf("%d", &num);

        if(num == 0)
        {
            break;
        }

        total++;

        if(num == anterior)
        {
            contador++;
        }
        else
        {
            if(contador > maxContador)
            {
                maxContador = contador;
                numeroMasRepetido = anterior;
            }

            contador = 1;
        }

        anterior = num;
    }

    if(contador > maxContador)
    {
        maxContador = contador;
        numeroMasRepetido = anterior;
    }

    printf("\nCantidad de numeros introducidos: %d\n", total);
    printf("El numero mas repetido es %d y se escribio %d veces seguidas\n",
           numeroMasRepetido, maxContador);

    return 0;
}
