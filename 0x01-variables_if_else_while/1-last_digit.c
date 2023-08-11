#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - ENTRY POINT
 *
 *Description: This program will assign a random number to the variable
 *
 *Return: 0 to success
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5", n, digit);
	else if (digit == 0)
		printf("Last digit of %d is %d and is 0", n, digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, digit);
	return (0);
}
