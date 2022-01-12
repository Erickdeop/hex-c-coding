/*
 * File: 11-print_to_98.c
 * Auth: Erick de Oliveira Pessoa
 */
#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints from n to 98
 * @n: given number
 * Return: returns each number from n to 98
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
