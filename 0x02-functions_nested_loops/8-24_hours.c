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
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
