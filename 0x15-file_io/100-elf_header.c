#include "main.h"
int main(int argc, char *argv[]) {
	int fd, i;
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2) {
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0) {
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header)) {
		fprintf(stderr, "Error: Can't read ELF header\n");
		close(fd);
		exit(98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		exit(98);
	}
	printf("Magic:   ");
	i = 0;
	while (i < EI_NIDENT)
	{ printf("%02x ", header.e_ident[i]);
		i++; }
	printf("\n");
	printf("Class:                             ");
	printf("%s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                              ");
	printf("%s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           ");
	printf("%d (current)\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            ");
	printf("%s\n", header.e_ident[EI_OSABI] == ELFOSABI_NONE ? "UNIX - System V" : "Unknown");
	printf("ABI Version:                       ");
	printf("%d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type:                              ");
	printf("%s\n", header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");
	printf("Entry point address:               ");
	printf("0x%lx\n", header.e_entry);
	close(fd);
	return (0);
}
