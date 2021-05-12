/*
 * File: 0-holberton.c 
 * Auth: Erick de Oliveira Pessoa
 */
#include "holberton.h"
/**
 * main - Entrada
 * Return: returns always 0
 */
int main(void)
{
	char *sh = "Holberton";
	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
