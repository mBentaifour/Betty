#include "3-calc.h"

/**
 * main - check the code
 * @argc: the number of args
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*op_func)(int, int), b, c;

	if (argc != 4)
		printf("Error\n"), exit(98);

	b = atoi(argv[1]);
	c = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n"), exit(99);

	if (!c && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(b, c));
	return (0);
}
