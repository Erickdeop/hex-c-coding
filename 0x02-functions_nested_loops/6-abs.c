/*
 * File: 6-sign.c
 * Auth: Erick de Oliveira Pessoa
 */
#include "holberton.h"
/**
 *  _abs - given an int, returns the value of its absolute
 *  @n: number
 * Return: absolute of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
