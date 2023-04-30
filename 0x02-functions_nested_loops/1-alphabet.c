#include "main.h"

/**
 * Print alphabet - print lowercase alphabet
 * return void
 */

void print_alphabet(void)
{
	int i = 97;
	while (i < 123) 
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
