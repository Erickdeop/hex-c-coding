/*
 * File: 8-24_hours.c
 * Auth: Erick de Oliveira Pessoa
 */
#include "holberton.h"
/**
 * jack_bauer - prints all minutes of the day
 * @hours = hours, @minutes = minutes
 * Return: every minute of the day in each line
 */

int jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
