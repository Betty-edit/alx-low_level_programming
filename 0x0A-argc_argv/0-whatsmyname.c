#include <stdio.h>
#include "main.h"
/**
 * main- prints the name offtheprogram
 * @argc: numerof argument
 * @argv: array of argument
 *
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)),  char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
