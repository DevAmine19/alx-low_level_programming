#include "main.h"
/**
 * int _abs- function print an intger zero positive or negative 
 * @n: is an integer
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n > 0 || n== 0)
		return (n);
	else 
		return ((-1) * n);
}

