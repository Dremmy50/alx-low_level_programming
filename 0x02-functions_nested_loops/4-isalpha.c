#include "main.h"
/**
 * _isalpha - print lower case and uppercase
 *
 * @c: parameter to be detected
 *
 * Return: 1 if its an alphabet and 0 if its otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
