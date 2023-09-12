#include "main.h"
/**
 * print_alphabet_x10 - function  
 * the alphabet  a - z
 */
void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			putchar(str[j]);
		}
		putchar('\n');
	}
}
