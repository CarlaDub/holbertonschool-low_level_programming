#include <stdio.h>

/**
 * main - Prints the alphabet except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		if (lettre != 'q' && lettre != 'e')
		{
			putchar(lettre);
		}
		lettre++;
	}
	putchar('\n');

	return (0);
}
