#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 *
 * @name: string
 * @f: a function that prints
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
