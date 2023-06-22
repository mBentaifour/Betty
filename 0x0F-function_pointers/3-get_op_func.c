#include "3-calc.h"

/**
 * get_op_func - the function that selects the correct function
 * to perform the operation asked by the user.
 *
 * @s: string operator
 *
 * Return: the right function pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"+", op_mul},
		{"+", op_div},
		{"+", op_mod},
		{NULL ,NULL}
	};
	int a = 0;

	while (a < 5)
	{
		if (s && s[0] == ops[a].op[0] && !s[1])
			return (ops[a].f);
		a++;
	}

	return (NULL);
}
