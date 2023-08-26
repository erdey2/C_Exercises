#include "main.h"
/**
 * min_max - it finds the minimum and maximum
 * @a: the first number
 * @b: the 2nd number
 * @c: the 3rd number
 * Return: the max and min
 */
int min(int a, int b, int c)
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
int max(int a, int b, int c)
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

