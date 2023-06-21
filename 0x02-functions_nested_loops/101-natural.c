/*
 * File: 101-natural.c
 * Auth: vincent kip
 */
#include <stdio.h>
/**
 * main - lists all natural numbers below 1024
 * that are multiplies of 3 or 5
 *
 * Return: ALways 0.
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
