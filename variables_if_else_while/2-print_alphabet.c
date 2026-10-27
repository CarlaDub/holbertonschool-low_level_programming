#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		putchar(lettre);
		lettre++;
	}
	putchar('\n');

	return (0);
}
