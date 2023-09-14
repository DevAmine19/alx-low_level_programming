#include "main.h"
/**
* positive_or_negative - function that print nmber negative or positive
* @i: an intger
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n");
	else if (i == 0)
		printf("0 is zero\n");
	else
		printf("%d is negative\n");
}
