#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (success)
int main(void)
{
char p;
int q;
long int r;
long long int s;
float t;

printf(size of a char: %lu byte(s)\n", (unsigned long)sizeof(p));
printf(size of a int: %lu byte(s)\n", (unsigned long)sizeof(q));
printf(size of a long int: %lu byte(s)\n", (unsigned long)sizeof(r));
printf(size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(s));
printf(size of a float: %lu byte(s)\n", (unsigned long)sizeof(t));
return (0);
}
