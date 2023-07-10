/*
 * Author: Francis Ofori Anane
 * Date: 10/30/2022
 */

#include "3-calc.h"

/**
 * get_op_function - Return a pointer to a function that performs mathematical
 * operations on two operands.
 *
 * @s: A pointer to the character of one of the variuos mathematical operational
 * signs
 *
 * Return: A pointer to the function based on the operational sign.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			printf("%s", ops[i].op);
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
