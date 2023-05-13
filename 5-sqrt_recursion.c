#include "main.h"

/**
 * _sqrt_recursion - Calcula la raíz cuadrada entera de un número dado.
 * @n: El número para el cual se calculará la raíz cuadrada.
 *
 * Return: La raíz cuadrada entera de n. Si n no tiene una raíz cuadrada entera, devuelve -1.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    else if (n == 0 || n == 1)
        return n;
    else
        return helper(n, 1, n);
}

/**
 * helper - Función auxiliar recursiva para calcular la raíz cuadrada entera.
 * @n: El número para el cual se calculará la raíz cuadrada.
 * @start: El punto de partida para la búsqueda de la raíz cuadrada.
 * @end: El punto final para la búsqueda de la raíz cuadrada.
 *
 * Return: La raíz cuadrada entera de n. Si n no tiene una raíz cuadrada entera, devuelve -1.
 */
int helper(int n, int start, int end)
{
    int mid, sqrt;

    if (start <= end)
    {
        mid = (start + end) / 2;
        sqrt = mid * mid;

        if (sqrt == n)
            return mid;
        else if (sqrt < n)
            return helper(n, mid + 1, end);
        else
            return helper(n, start, mid - 1);
    }

    return end;
}
