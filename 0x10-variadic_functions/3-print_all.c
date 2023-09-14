#include "variadic_functions.h"
/**
 *print_all - prints ath based on strins format
 *@format: string
 *Return: void
 */
void print_all(const char * const format, ...)
{
	int x, y = 0, i = 0;
	char c, *s;
	const char syms[] = "cifs";
	va_list args;

	va_start(args, format);


	while (format && format[i] != '\0')
	{
		while (syms[y])
		{
			if (format[i] == syms[y] && x == 0)
			{
				printf(", ");
				break;
			}
			y++;
		}
		switch (format[i])
		{
			case ('c'):
				c = va_arg(args, int);
				printf("%c, ", c);
				x = 0;
				break;
			case ('i'):
				printf("%d", va_arg(args, int));
				x = 0;
				break;
			case ('f'):
				printf("%f", va_arg(args, double));
				x = 0;
				break;
			case ('s'):
				s = va_arg(args, char *);
				printf("%s", s ? s : "(nil)");
				x = 0;
				break;			
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

