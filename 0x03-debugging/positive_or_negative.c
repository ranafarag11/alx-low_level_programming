#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * positive_or_negative - determine if number is positive or negative
 *
 * Description: program will assign a random number to the variable n each time
 * its executed.
 *
 *  Return: void
 */


void positive_or_negative(int i)
{


	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
