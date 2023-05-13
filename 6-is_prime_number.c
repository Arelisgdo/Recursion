#include "main.h"

/**
 * is_prime_number - Verifica si un número dado es un número primo.
 * @n: El número para verificar si es primo.
 *
 * Return: 1 si n es un número primo, 0 en caso contrario.
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return 0;
    else
        return helper(n, 2);
}

/**
 * helper - Función auxiliar recursiva para verificar si un número es primo.
 * @n: El número para verificar si es primo.
 * @divisor: El divisor actual para comprobar si es un divisor válido de n.
 *
 * Return: 1 si n es un número primo, 0 en caso contrario.
 */
int helper(int n, int divisor)
{
    if (divisor == n)
        return 1;
    else if (n % divisor == 0)
        return 0;
    else
        return helper(n, divisor + 1);
}
