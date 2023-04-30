#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 *  Return: 0 (success)
 */

int main(void)
{
	char t[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(t[i]);
	}
	_putchar('\n');

	return (0);
}
