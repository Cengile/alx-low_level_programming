#include <stdio.h>
#include <main.h>

/**
 * main Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "_putchar";

	while(*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	
	print_putchar(*sh);
	return 0;
}
