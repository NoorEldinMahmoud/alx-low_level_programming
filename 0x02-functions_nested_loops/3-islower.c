#include "main.h"

/**
 * _islower - check for the lowercase charachters
 * @c: is the harachter to be checked.
 * Return: 1 for lower charachter else  0 .
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
