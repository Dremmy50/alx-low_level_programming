#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: the parameter of the character
 */

void print_diagonal(int n)
{
int line, gap;

if (n > 0)
{
for (line = 0; line <= n; line++)
{
for (gap = 0; gap <= line; gap++)
{
_putchar('_');
}
_putchar('\\');
if (line == n - 1)
{
contine;
}
_putchar('\n);
}
}
_putchar('\n');
}
