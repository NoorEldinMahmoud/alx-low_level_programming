#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 10 starting from 0
 * followed by a new line.
 * Return: (0) Success
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%d", num);
		num += 1;
	}
	printf("\n");
	return (0);
}
