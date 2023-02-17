#include <stdio.h>

/**
 * main - print the size of various types on the computer, compile and run
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	printf("The size of char is %d bytes\n", sizeof(char));
	printf("The size of int is %d bytes\n", sizeof(int));
	printf("The size of long int is %d bytes\n", sizeof(long int));
	printf("The size of long long int is %d bytes\n", sizeof(long long));
	printf("The size of float is %d bytes\n", sizeof(float));
	return (0);
}
