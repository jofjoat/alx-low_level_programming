#include "main.h"

/**
 * _strlen_recursion - size
 * 
 * @s: pointer to string params
 * @return: recursion
 */

int _strlen_recursion(char *s) 
{
    if (!*s)
    {
        return (0);
    }
    return (1 + _strlen_recursion(++s));
}
