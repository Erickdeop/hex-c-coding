/*
 * File: 1-alphabet.c
 * Auth: Erick de Oliveira Pessoa
 */
#include "holberton.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 * Return: returns always 0
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');

	return (0);
}
