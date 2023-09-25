#include <stdio.h>
/**
 * main - Entry point
 * print Size of a char
 * print Size of an int
 * print Size of a long int
 * print Size of a long long int
 * print Size of a float
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu bute(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
