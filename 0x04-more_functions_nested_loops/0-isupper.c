#include "main.h"

/**
 * _isupper - function checks for uppercase character.
 * @c: inputs character to check
 * Return: int.
 */

int _isupper(int c)
{
if (c >= 122 && c <= 97)
return (1);
else
return (0);
}
