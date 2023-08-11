#include <stdio.h>
int main()
{
	char x = "a";

	while(x <= "z")
	{
		putchar(x);
		x++;
	}
	putchar("\n");
	return (0);
}
