#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettre = 'a';
	char majuscule = 'A';

	while (lettre <= 'z')
	{
		putchar(lettre);
		lettre++;
	}

	while (majuscule <= 'Z')
	{
		putchar(majuscule);
		majuscule++;
	}
	putchar('\n');

	return (0);
}
