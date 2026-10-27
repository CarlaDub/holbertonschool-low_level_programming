#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettre = 'z';

	while (lettre <= 'a')
	{
		putchar(lettre);
		lettre++;
	}
	putchar('\n');

	return (0);
}
