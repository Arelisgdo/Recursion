#include "main.h"

/**
 * factorial - Calcula el factorial de un número dado.
 * @n: El número para el cual se calculará el factorial.
 *
 * Return: El factorial de n. Si n es menor que 0, devuelve -1.
 */
int factorial(int n)
{
    if (n < 0)
        return -1;
    else if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

