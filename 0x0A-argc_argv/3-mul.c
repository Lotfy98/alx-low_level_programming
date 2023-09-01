#include <stdio.h>
/**
 *main - entry point
 *@argc: int
 *@argv: string
 *Return: 0 to succes, error with 1
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc !=  3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", result);
	return (0);
}
