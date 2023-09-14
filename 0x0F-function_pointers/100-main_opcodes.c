#include "function_pointers.h"
/**
 *main - entry point
 *@argc: counter
 *@argv: value
 *Return: 0 to success
 */
int main(int argc, char *argv[])
{
	char *z = (char *)main;
	int i, x;

	if (argc != 2)
		printf("Error\n"),return (1);

	x = atoi(argv[1]);
	if (x < 0)
		printf("Error\n"),return (2);
	while (b--)
		printf("%02hx%s", *z++, x ? " " : "\n");
	return (0);
}
