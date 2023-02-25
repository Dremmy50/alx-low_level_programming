#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints the number 0-9
 *
 * @i: parameter
 * Return: always 0-9 followed by a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	_putchar(i + '0');
	_putchar('\n');
}
