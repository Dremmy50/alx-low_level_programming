#include "main.h"

/**
 * _isupper - checks for capital letter
 * @c: Parameter to be checked
 *
 * Return: 0 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
