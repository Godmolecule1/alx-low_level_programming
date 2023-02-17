#include <stdio.h>

/**
 * main - print the size of various types on the computer, compile and run
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	printf("Size of a char is %d bytes\n", sizeof(char));
	printf("Size of an int is %d bytes\n", sizeof(int));
	printf("Size of a long int is %d bytes\n", sizeof(long int));
	printf("Size of a long long int is %d bytes\n", sizeof(long long));
	printf("Size of a float is %d bytes\n", sizeof(float));
	return (0);
}
