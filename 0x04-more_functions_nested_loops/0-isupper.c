#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: character to check
 *
 * Return: 1 if c is uppercase and 0 for others
 */
int _isupper(int c)
{
	if (c <= 'A' && c >= 'Z')
		return (1);
	else
		return (0);
}
