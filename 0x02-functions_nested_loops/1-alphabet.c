#include "main.h"
/**
 * print_alphabet - function print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
		int i;

	for (i = 0; i < 26; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
