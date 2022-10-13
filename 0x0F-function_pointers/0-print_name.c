/*
 * Author: Francis Ofori Anane
 * Date: 13/10/2022
 */

/**
 * print_name - Prints a name.
 *
 * @name: The name to print
 * @f: A pointer to a function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name && !f)
		return;

	(*f)(name);
}
