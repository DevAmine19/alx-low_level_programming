#include "main.h"
/**
 * print_last_digit- function print last digit
 * @n: is an integer
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int s;

	if (n < 0)
		s = (-1) * (n % 10);
	else
		s = n % 10;
	_putchar(s + '0');
return (s);
}
