#include "main.h"
/**
 * _isalpha - function print the alphabet is lowercase or uppercase
 * @c: is an integer
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
	       return (1);
	}
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
