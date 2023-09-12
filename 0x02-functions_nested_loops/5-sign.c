#include "main.h"
/**
 * print_sign- function print an intger zero positive or negative 
 * @n: is an integer
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else 
		return (-1);
}
