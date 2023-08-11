#include <stdio.h>
/**
 *main - ENTRY POINT
 *
 *Description: a program that prints the alphabet in lowercase,and uppercase
 *
 *Return: 0 to success
 */
int main(void)
{
	char x, y;

	x = 'a';
	y = 'A';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
