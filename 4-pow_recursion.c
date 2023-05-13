#include "main.h"

/**
 * _pow_recursion - Calcula el valor de x elevado a la potencia y.
 * @x: El número base.
 * @y: El exponente.
 *
 * Return: El valor de x elevado a la potencia y.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
        return -1;
    else if (y == 0)
        return 1;
    else
        return x * _pow_recursion(x, y - 1);
}
