#include "3-calc.h"
/**
 *main - entry point
 *@argc: count
 *@argv: value
 *Return: 0
 */
int main(int argc, char **argv)
{
	int (*op_function)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_function = get_op_func(argv[2]);
	if (!op_function)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", op_function(a, b));
	return (0);
}
