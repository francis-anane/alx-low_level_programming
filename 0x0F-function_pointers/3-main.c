#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Description: perfroms simple maths operations
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
