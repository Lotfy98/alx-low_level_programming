#include <stdio.h>
/**
 *main - ENTRY POINT
 *
 *Description: program that prints the lowercase alphabet in reverse
 *
 *Return: 0 to success
 */
int main(void)
{
	char harf = 'z';

	while (harf >= 'a')
	{
		putchar(harf);
		harf--;
	}
	putchar('\n');
	return (0);
}
