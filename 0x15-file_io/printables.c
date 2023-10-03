#include "main.h"
/**
 *print_osabi - prints OS/ABI of ELF file
 *@e_ident: ptr to arr of bytes to interpret file
 *Return: void
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
		break;
		default:
			printf("Unknown\n");
	}
}
/**
 *print_abiversion - prints app binary interface of ELF
 *@e_ident: ptr to arr of bytes to interpret file
 *Return: void
 */
void print_abiversion(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}
/**
 *print_type - prints type of ELF file
 *@e_type: obj file type
 *Return: void
 */
void print_type(uint16_t e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		default:
			printf("Unknown\n");
	}
}
/**
 *print_entry - prints the entry point of ELF file
 *@e_entry: vmem address where process starts
 *Return: void
 */
void print_entry(uint64_t e_entry)
{
	printf("  Entry point address:               0x%lx\n", e_entry);
}
