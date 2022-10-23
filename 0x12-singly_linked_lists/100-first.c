/*
 * Author: Francis Ofori Anane
 * Date: 23/10/2022
 */

#include <stdio.h>

int main(void);
extern void _exit(register int);
/**
 * _start - Executes and print something * before main is executed.
 *
 * Return: 0 (success)
 */

int _start(void)
{
	char *str0 = "You're beat! ";
	char *str1 = "and yet, you must allow,";
	char *str2 = "\nI bore my house upon my back!\n";

	printf("%s%s%s", str0, str1, str2);

	main();
	_exit(0);
}
