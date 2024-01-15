#include "main.h"
/**
 * _puts - ..........
 * @str: string input
 * Return: 0 success
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
++str;
}
_putchar('\n');
}
