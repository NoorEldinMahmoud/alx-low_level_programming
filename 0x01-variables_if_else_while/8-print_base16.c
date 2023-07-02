#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase.
 * followed by new line.
 *
 * Return: (0) Success.
 */

int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar ((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar('\n');

	return (0);
}
