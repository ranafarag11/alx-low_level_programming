#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description:  print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		i = 97;
		while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	}
}
