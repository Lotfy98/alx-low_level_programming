#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: int
 *@argv: array
 *Return: 0 to success
 */
int main(int argc, char *argv[])
{
	int result = 0;
	char *x;

	while (--argc)
	{
		x = argv[argc];
		while (*x)
		{
			if (*x < '0' || *x > 9)
			{
				return (printf("Error\n"), 1);
			}
			x++;
		}
		result += atoi(argv[argc]);
	}
	printf("%i\n", result);
	return (0);
}
