/*
 * File: 5-print_numbers.c
 * Auth: Erick de Oliveira Pessoa
 */
#include <stdio.h>
/**
 * main - Prints numbers from 0 to 10
 * Return: returns always 0
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
