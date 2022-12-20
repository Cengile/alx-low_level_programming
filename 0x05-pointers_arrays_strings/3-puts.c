#include "main.h"

/**
 * _puts - Prints a string@str: The string to print
 * @str: The string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	char *str;

	while (*str != '\0')
	       	
	{
		_putchar(*str + 0);
		++str;
	}

	_putchar('\n');
}
