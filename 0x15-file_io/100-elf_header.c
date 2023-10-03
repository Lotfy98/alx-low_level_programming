#include "main.h"
#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
int fd;
ssize_t bytes_read;
unsigned char e_ident[EI_NIDENT];

if (argc != 2)
{ fprintf(stderr, "Usage: elf_header elf_filename\n");
exit(98); }
fd = open(argv[1], O_RDONLY);
if (fd < 0)
{ fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
exit(98); }
bytes_read = read(fd, &e_ident, EI_NIDENT);
if (bytes_read != EI_NIDENT)
{ fprintf(stderr, "Error: Can't read ELF header\n");
close(fd);
exit(98); }
if (e_ident[EI_MAG0] != ELFMAG0 || e_ident[EI_MAG1] != ELFMAG1 ||
e_ident[EI_MAG2] != ELFMAG2 || e_ident[EI_MAG3] != ELFMAG3)
{ fprintf(stderr, "Error: Not an ELF file\n");
close(fd);
exit(98); }
lseek(fd, 0, SEEK_SET);
if (e_ident[EI_CLASS] == ELFCLASS32)
{ Elf32_Ehdr header;
bytes_read = read(fd, &header, sizeof(header));
if (bytes_read != sizeof(header))
{ fprintf(stderr, "Error: Can't read ELF header\n");
close(fd);
exit(98);
}
printf("Entry point address:               ");
printf("0x%x\n", header.e_entry); }
else if (e_ident[EI_CLASS] == ELFCLASS64)
{ Elf64_Ehdr header;
bytes_read = read(fd, &header, sizeof(header));
if (bytes_read != sizeof(header))
{ fprintf(stderr, "Error: Can't read ELF header\n");
close(fd);
exit(98); }
printf("Entry point address:               ");
printf("0x%lx\n", header.e_entry); }
else
{ fprintf(stderr, "Error: Unknown ELF class\n");
close(fd);
exit(98); }
close(fd);
return (0);
}
