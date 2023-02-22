#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabet character
 * @c: character to print
 * Return: 1 if letter,lowercase or uppercase otherwise 0
 */

int _isalpha(int c)
{
	int lower = (c >= 'a' && c <= 'z');
	int upper = (c >= 'A' && c <= 'Z');

	return (lower || upper);
}
