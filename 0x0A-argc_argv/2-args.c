#include <stdio.h>
/**
 *main - entry point
 *@argc: int
 *@argv: string
 *Return: 0 to uccess
 */
int main(int argc, char const **argv)
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
		argc--;
	}
	return (0);
}
