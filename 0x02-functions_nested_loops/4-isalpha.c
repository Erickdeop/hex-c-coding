/*
 * File: 4-isalpha.c
 * Auth: Erick de Oliveira Pessoa
 */
#include "holberton.h"
/**
 * _isalpha - check if is a alphabetic character
 * @c: single letter
 * Return: 1 if c is a letter, or 0 if not
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
