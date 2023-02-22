#include "main.h"

/**
 * _abs - function that computes absolute value of an integer
 * @f: number to be computed
 * Return: 0
 */

int _abs(int f)
{
	if (f >= 0)
	{
		return (f);
	}
	else
	{
		return (f * (-1));
	}
}
