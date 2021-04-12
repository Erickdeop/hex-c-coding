/*
 * File: 8-print_comb.c
 * Auth: Erick de Oliveira Pessoa
 */
#include <stdio.h>
/**
 * main - Prits digits separated by commas
 * Return: returns always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
