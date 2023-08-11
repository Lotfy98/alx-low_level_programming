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
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
