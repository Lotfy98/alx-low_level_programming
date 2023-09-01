#include <stdio.h>
/**
 *main - entry point
 *@argc: int
 *@argv: string
 *Return: 0 to uccess
 */
int main(int argc, char const **argv)
{
	for (int x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
		argc--;
	}
	return (0);
}
