/*
 * File: 2-print_alphabet_x10.c
 * Auth: Erick de Oliveira Pessoa
 */
#include "holberton.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 * Return: returns always 0
 */
void print_alphabet_x10(void)
{
	int n, co;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
