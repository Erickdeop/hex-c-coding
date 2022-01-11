/*
 * File: 7-print_last_digit.c
 * Auth: Erick de Oliveira Pessoa
 */
#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int div;

	div = (n % 10);

	if (div < 0)
	{
		div = (-1 * div);
	}

	_putchar(div + '0');
	return (div);
}
