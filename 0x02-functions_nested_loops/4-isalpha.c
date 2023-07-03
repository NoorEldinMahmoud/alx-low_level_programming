#include "main.h"

/**
 * _isalpha - check for alphabatic charachter
 * @c: The character to be checked
 * Return: 1 for alphabatic and 0 for else.
 */

int _isalpha(int c)

{

	if ((c >= 65 && c <= 90) || (c >= 79 && c <= 122))
	{
		return (1);
	}
	return (0);
}
