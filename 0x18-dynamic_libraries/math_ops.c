/*
 * File: 10-add.c
 * Author: Francis Ofori Anane
 * Date: 14/09/2022
 */

#include "main.h"

/**
 * add - Add two integers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: value of the addition.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract two integers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: value of the subtraction.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply two integers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: product of a and b.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - devide two integers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: value of the division.
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - get the module of a and b .
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: a modulo b.
 */
int mod(int a, int b)
{
	return (a % b);
}
