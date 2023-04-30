#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @v: v is an integer
 *
 * Return: integer
 */

int _abs(int v)
{
	if (v > 0)
	{
		return (v);
	}
	else if (v < 0)
	{
		return (-v);
	}
	else
	{
		return (v);
	}
}
