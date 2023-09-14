#include "variadic_functions.h"
/**
 *print_all - prints ath based on strins format
 *@format: string
 *Return: void
 */
void print_all(const char * const format, ...)
{
	char *s, *f;
	va_list args;

	va_start(args, format);
	f = (char *)format;
	while (*f)
	{
		switch (*f++)
		{
			case ('c'):
			{
				printf("%c", va_arg(args, int));
				break;
			}
			case ('i'):
			{
				printf("%d", va_arg(args, int));
				break;
			}
			case ('f'):
			{
				printf("%f", va_arg(args, double));
				break;
			}
			case ('s'):
			{
				s = va_arg(args, char*);
				printf("%s", s ? s : "(nil)");
				break;
			}
		}
		if (*(f) && (*f != ' '))
			printf(", ");
	}
	printf("\n");
	va_end(args);
}

