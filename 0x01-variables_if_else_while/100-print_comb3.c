#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *	a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int c, i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i);

				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	
	
	putchar('\n');

	return (0);
}

