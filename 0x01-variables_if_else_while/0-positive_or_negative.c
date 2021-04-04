/*
 * File: 1-puts.c
 * Auth: Erick de Oliveira Pessoa
 */
#include <stdio.h>
#include <time.h>
/**
 * main - Calculates if a number is positive or negative or zero
 * Return: returns always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n= rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		print("%d is positive\n", n);
	}

	return (0);
}
