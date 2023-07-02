#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Combinations of 4 single digits
 *
 * Return: 0 Success.
 */

int main(void)
{
	int q, w;

	for (q = 0; q <= 98; q++)
	{
		for (w = q + 1; w <= 99; w++)
		{
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');
			putchar(' ');
			putchar((w / 10) + '0');
			putchar((w % 10) + '0');
			if (q == 98 && w == 99)
				continue;
			putchar(',');
			putchar(' ');
		}}
	putchar('\n');
	return (0);
}
