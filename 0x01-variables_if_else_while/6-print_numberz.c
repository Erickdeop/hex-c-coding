/*
 * File: 6-print_numberz.c
 * Auth: Erick de Oliveira Pessoa
 */
#include <stdio.h>
/**
 * main - Prints numbers from 0 to 10
 * Return: returns always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar ('\n');
	return (0);
}
