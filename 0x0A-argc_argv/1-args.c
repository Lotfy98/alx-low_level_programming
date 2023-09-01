#include <stdio.h>
/**
 *main - entry point
 *@argc: integer
 *@argv: pointer to string
 *Return: 0 to success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
