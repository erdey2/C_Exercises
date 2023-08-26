#include <stdio.h>

#include "main.h"
/**
 * min_max - it finds the minimum and maximum
 * @a: the first number
 * @b: the 2nd number
 * @c: the 3rd number
 * Return: the max and min
 */
int max(int a, int b, int c)
{
	int maximum;

	if (a >= b)
	{
		if (a >= c)
		{
			maximum = a;
		}
		else
		{
			maximum = c;
		}
	}
	else
	{
		if (b >= c)
			maximum = b;
			else
				maximum = c;
	}

	if (a || b || c)
		return maximum;
	else
		return 0;
}
int min(int a, int b, int c)
{
	int minimum;
	if (a <= b)
	{
		if (a <= c)
		{
			minimum = a;
		}
		else
		{
			minimum = c;
		}
	}
	else
	{
		if (b <= c)
			minimum = b;
			else
				minimum = c;
	}
	if (a || b || c)
		return minimum;
	else
		return 0;
}

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1, num2, num3, max_number, min_number;

	int (*mm) (int, int, int);

	num1 = 8;
	num2 = 7;
	num3 = 2;

	mm = &min;
	min_number = mm (num1, num2, num3);
	printf("the minimum number is: %d \n", min_number);

	mm = &max;
	max_number = max (num1, num2, num3);
	printf("the maximum number is: %d \n", max_number);

	return (0);
}


