#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the charachto print
 * Return: 1 Success
 * on error, -1 is returned
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
