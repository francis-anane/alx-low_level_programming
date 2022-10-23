/*
 * Author: Francis Ofori Anane
 * Date: 23/10/2022
 */

#include <stdio.h>

extern void _exit(register int);
int main(void);

/**
 * _start - Executes and print something * before main is executed.
 *
 * Return: 0 (success)
 */

int _start(void)
{
	printf("You're beat! and yet, you must allow,\\nI bore my house upon myback!\\n\n");

	main();
	_exit(0);
}
