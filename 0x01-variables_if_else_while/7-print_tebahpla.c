/*
 * File: 7-print-tebahlpa.c
 * Auth: Erick de Oliveira Pessoa
 */
#include <stdio.h>
/**
 * main - Prints the alphabet in reverse
 * Return: returns always 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
