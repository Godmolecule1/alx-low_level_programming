#include "main.h"
#include <stdio.h>

/**
 * _islower - this checks for lowercase character
 * @c: character to print
 * Return: 1 if lowercase and 0 therwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
