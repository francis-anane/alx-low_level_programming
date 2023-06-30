/*
 * Author: Francis Ofori Anane
 * Date: 23/10/2022
 */

#include <stdio.h>

/**
 * exec_first - Executes and print something * before main is executed.
 *
 * Return: 0 (success)
 */
 void __attribute__((constructor)) exec_first()
{
    printf("You're beat! and yet, you must allow");
    printf(",\nI bore my house upon my back!\n");
}
