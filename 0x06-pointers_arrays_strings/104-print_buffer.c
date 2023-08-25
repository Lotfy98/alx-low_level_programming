#include <stdio.h>
#include "main.h"
/**
 *isASCII - determine if n is printable ascii character
 *@n: integer
 *Return: 1 if true, 0 if false
 */
int isASCII(int n)
{
	return (n >= 32 && n <= 126);
}
/**
 *printHexes - print hex values for string
 *@b: string
 *@start: starting position
 *@end:ending position
 */
void printHexes(char *b, int start, int end)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
	}
}
/**
 *printASCII - print ascii vlaue for string and
 *replacing nonprintable chars with '-'
 *@b: string
 *@start: start
 *@end: end
 */
void printASCII(char *b, int start, int end)
{
	int ch, i;

	for (i = 0; i < end; i++)
	{
		ch = *(b + i + start);
		if (!isASCII(ch))
		{
			ch = 46;
		}
		printf("%c", ch);
	}
}
/**
 *print_buffer - print a buffer
 *@b: string
 *@size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
