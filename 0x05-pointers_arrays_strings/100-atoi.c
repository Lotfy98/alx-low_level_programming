#include "main.h"
/**
 * _atoi - converts string to integer
 *@s: string
 *Return: converted integer from string
 */
int _atoi(char *s)
{
	unsigned int x = 0;
	int y = 1;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= 0 && *s <= '9')
		{
			x = (x * 10) + (*s - '0');
		}
		else if (x > 0)
		{
			break;
		}
	} while (*s++);

	return (x * y);
}
