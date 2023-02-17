#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of char is %1d bytes\n", sizeof(char));
	printf("The size of short is %1d bytes\n", sizeof(short));
	printf("The size of int is %1d bytes\n", sizeof(int));
	printf("The size of long is %1d bytes\n", sizeof(long));
	printf("The size of long long is %1d bytes\n", sizeof(long long));
        printf("The size of float is %1d bytes\n", sizeof(float));
	printf("The size of double is %1d bytes\n", sizeof(double));
	 printf("The size of long double is %1d bytes\n", sizeof(long double));
	 return (0);
}
