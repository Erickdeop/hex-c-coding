/*
 * File: 3-islower.c
 * Auth: Erick de Oliveira Pessoa
 */
#include "holberton.h"
/**
 * _islower - check if a letter is in lowercase
 * @c: letter which is being checked
 * Return: returns always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
