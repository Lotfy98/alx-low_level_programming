#include <stdio.h>
/**
 *main - entry point
 *@argc: int
 *@argv: string
 *Return: 0 to success
 */
int main(int argc, char const **argv)
{
	int x;

	for (x = 0; argc--; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
