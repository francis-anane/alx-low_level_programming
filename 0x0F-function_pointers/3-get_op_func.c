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
	if (s != "+" || s != "-" || s != "*" || s != "/" || s != "%")
		return (NULL);

	op_t ops[] = {

		{"+", op_add},

		{"-", op_sub},

		{"*", op_mul},

		{"/", op_div},

		{"%", op_mod},

		{NULL, NULL}
	};

    int i



}
