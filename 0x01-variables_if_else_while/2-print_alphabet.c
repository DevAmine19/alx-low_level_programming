#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * A C program that purchar all alp
 * Return: Always 0 (Success)
 */ 
int main (void)
{
	char ap[26]="abcdefghijklmnopqrstuvwxyz";
	int i;
	for(i=0;i<26;i++)
	{
		putchar(ap[i]);
	}
	putchar('\n');
	return (0);
}
