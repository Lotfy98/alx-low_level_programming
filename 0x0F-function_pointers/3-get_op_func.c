#include "3-calc.h"

/**
 *get_op_func - returns pointer to right op func
 *@s: string operator
 *Return: the right function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};

	for (i = 0; i < 5; i++)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
			return (ops[i].f);
	}

	return (NULL);
}
