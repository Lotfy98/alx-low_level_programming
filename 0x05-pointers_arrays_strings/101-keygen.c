#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - Entry point
 *
 * Description: program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: 0 to success
 *
 */
int main(void)
{
	int x;
	char y;

	srand(time(NULL));
	if (sum <= 2645)
	{
		y = rand() % 128;
		x += y;
		putchar(y);
	}
	putchar(2772 - x);
	return (0);
}
