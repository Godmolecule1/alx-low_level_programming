#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * code by God_molecule
 *
 * Return: Always 0.
 *
 */
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
