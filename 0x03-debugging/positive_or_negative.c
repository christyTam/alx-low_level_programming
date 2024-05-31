<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * This program will assign a random number to the variable n
 *
 * print whether the number stored in the variable n is positive or negative
 *
 * Return: returns 0 (for success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}

	return (0);
=======
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
>>>>>>> f5f0aef9f0e22f1346db33d00b3518cfebd0e3a2
}
