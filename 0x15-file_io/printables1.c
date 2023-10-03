#include "main.h"
/**
 *print_magic - prints the magic numbers of the ELF file
 *@e_ident: ptr to arr of bytes to interprt the file
 *Return: void
 */
void print_magic(unsigned char *e_ident)
{
	int i = 0;

	printf("  Magic:   ");
	while (i < EI_NIDENT)
	{
		printf("%02x ", e_ident[i]);
		i++;
	}
	printf("\n");
}
/**
 *print_class - prints the class of ELF file
 *@e_ident: ptr to arr of bytes to interpret the file
 *Return: void
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Unknown\n");
	}
}
/**
 *print_data - prints the data encoding of the ELF file
 *@e_ident: ptr to arr of bytes to interpret file
 *Return: void
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Unknown\n");
	}
}
/**
 *print_version - print version of ELF file
 *@e_ident: ptr to arr of bytes to interpret file
 *Return: void
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           ");
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("1 (current)\n");
			break;
		default:
			printf("Unknown\n");
	}
}
