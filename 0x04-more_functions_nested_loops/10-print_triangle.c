#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: sie of the triangle
 */
void print_triangle(int size)
{
	int row, hash, space;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space >= 1; space--)
			{
				putchar(' ');
			}
			for (hash = 1; hash <= row; hash++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}

