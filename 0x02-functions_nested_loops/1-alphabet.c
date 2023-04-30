#include "main.h"

/**
 * Print_alphabet - print lowercase alphabet
 *
 * Description: print alphabet prints lower case only.
 *
 * return: void
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
