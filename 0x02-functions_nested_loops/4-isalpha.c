#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @r: r is an ascii character
 *
 * Return: 1 (if letter)
 */

int _isalpha(int r)
{
	if (r >= 'a' && r <= 'z')
	{
		return (1);
	}
	else if (r >= 'A' && r <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
