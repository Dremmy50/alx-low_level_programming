#include "main.h"

/**
 * print_line - Draws a straight line using character
 * @n: The number of _character to be printed
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line <= n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
