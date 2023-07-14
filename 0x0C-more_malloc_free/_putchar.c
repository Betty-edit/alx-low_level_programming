#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: chaeracter
 *
 * Return: on 1 success
 * on error, -1 and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
