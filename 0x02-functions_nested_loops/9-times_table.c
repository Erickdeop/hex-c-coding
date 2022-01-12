/*
 * File: 9.times_table.c
 * Auth: Erick de Oliveira Pessoa
 */
#include "holberton.h"
/**
 * times_table - prints the times table until 9
 * @row = row, @column = columm, @n = number
 * Return: return the times table until 9 every line
 */

void times_table(void)
{
	int row, column, n;

	for (row = 0; row < 10; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (column = 1; column < 10; column++)
		{
			n = (row * column);
			if ((n / 10) > 0)
			{
				_putchar((n / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((n % 10) + '0');

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
