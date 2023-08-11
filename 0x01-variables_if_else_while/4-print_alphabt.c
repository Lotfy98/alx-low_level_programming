#include <stdio.h>
/**
 *main - ENTRY POINT
 *
 *Description: a program that prints the alphabet in lowercase and new line
 *
 *Return: 0 to success
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
		if (x == 'q' && x == 'e')
		{
			x = '';
		}
	}
	putchar('\n');
	return (0);
}
