#include "main.h"

/**
 * _strlen_recursion - Calcula la longitud de una cadena.
 * @s: Puntero a la cadena para la cual se calculará la longitud.
 *
 * Return: La longitud de la cadena.
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0;
    
    return 1 + _strlen_recursion(s + 1);
}
