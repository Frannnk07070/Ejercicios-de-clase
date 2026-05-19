#include <stdio.h>

int main()
{
    int n, i;
    int factorial = 1;

    printf("Ingresa un numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("El factorial de %d es %d\n", n, factorial);

    return 0;
}
