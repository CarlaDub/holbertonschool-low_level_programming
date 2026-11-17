#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: Name to print
 * @f: Function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
