#include <unistd.h>
/**
 *main - ENTRY POINT
 *
 *Description: Write a C program that prints exactly
 *
 *Return: 1 not success
 */
int main(void)
{
char quote[] = " and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(1, quote, 60);
return (1);
}
