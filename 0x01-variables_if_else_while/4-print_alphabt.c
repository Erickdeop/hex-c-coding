/*
 * File: 2-print_alphabet.c
 * Auth: Erick de Oliveira Pessoa
 */
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * Return: returns always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' || c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
