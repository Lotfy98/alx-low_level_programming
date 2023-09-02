#include <stdio.h>
#include <stdlib.h>
/**
 *main -entry point
 *@argc: integer
 *@argv: string
 *Return: 0 to success
 */
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0, minim = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		while (i < 5)
		{
			if (money >= cents[i])
			{
				minim += money / cents[i];
				money = money % cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
			i++;
		}
		printf("%i\n", minim);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
