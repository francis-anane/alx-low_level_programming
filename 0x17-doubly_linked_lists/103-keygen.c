#include "lists.h"

/**
 * main - Entry point
 * @ac: Arguments count.
 * @av: Argument vector.
 * Description: Generates and prints keys for the crackme5 program.
 * Return: 0 (success)
 */
int main(int __attribute__((__unused__)) ac, char *av[])
{
	char passwd[7], *code;
	int i, tmp;
	int len = strlen(av[1]);

	code = "F-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	passwd[0] = code[tmp];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += av[1][i];
	passwd[1] = code[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= av[1][i];
	passwd[2] = code[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (av[1][i] > tmp)
			tmp = av[1][i];
	}
	srand(tmp ^ 14);
	passwd[3] = code[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (av[1][i] * av[1][i]);
	passwd[4] = code[(tmp ^ 239) & 63];

	for (i = 0; i < av[1][0]; i++)
		tmp = rand();
	passwd[5] = code[(tmp ^ 229) & 63];

	passwd[6] = '\0';
	printf("%s", passwd);
	return (0);
}
