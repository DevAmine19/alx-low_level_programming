#include "main.h"
/**
 * islower- function print the alphabet is lowercase or not 
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else 
		return (0);
}
