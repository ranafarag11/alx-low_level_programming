#include "main.h"

/**
 * _islower - checks for lowercase
 * @r: r is an ascii character
 *
 * Return: 1 if lowercase
 */

int _islower(int r)
{
	if (r >= 'a' && r <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
