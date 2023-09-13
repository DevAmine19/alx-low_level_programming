#include "main.h"
/**
 * print_to_98- function print addition from a number to 98
 * @n:an intger
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else 
	{
		for (i = n; i > 98; i--)
		{
	                printf("%d, ", i);
		}
	}
	printf("98\n");
}
