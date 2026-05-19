#include <stdio.h>

int main()
{
    int inicio, fin, grupo;
    int i, contador = 0;
    char opcion;

    printf("Ingresa el numero inicial: ");
    scanf("%d", &inicio);

    printf("Ingresa el numero final: ");
    scanf("%d", &fin);

    printf("Ingresa el tamano del grupo: ");
    scanf("%d", &grupo);

    for(i = inicio; i <= fin; i++)
    {
        printf("%d ", i);
        contador++;

        if(contador == grupo)
        {
            printf("\nDeseas continuar? (s/n): ");
            scanf(" %c", &opcion);

            if(opcion == 'n' || opcion == 'N')
            {
                break;
            }

            contador = 0;
        }
    }

    return 0;
}
