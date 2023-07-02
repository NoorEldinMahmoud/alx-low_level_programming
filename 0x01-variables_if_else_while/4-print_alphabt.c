#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: (0) Success
 */

int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == 'e' || lowercase == 'q')
		{
			lowercase += 1;
		}
		else
		{
			putchar(lowercase);
			lowercase += 1;
		}
	}
	putchar('\n');
return (0);
}
