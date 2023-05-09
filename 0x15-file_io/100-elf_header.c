#include <elf.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - function to check ELF file
 * @e_ident: th pointer to the array of ELf magic
 */
void check_elf(unsigned char *e_ident)
{
	int ind;

	for (ind = 0; ind < 4; ind++)
	{
		if (e_ident[ind] != 127 &&
				e_ident[ind] != 'E' &&
				e_ident[ind] != 'L' &&
				e_ident[ind] != 'F')
		{
			dprintf(STDERR_FILENO, "Erro: It is not an ELF file \n");
			exit(98);
		}
	}
}
/**
 * print_magic - functionn to print magic numbet in ELF file
 * @e_ident: the pointer to the array of ELF magic file
 *
 */

void print_magic(unsigned char *e_ident)
{
	int ind;

	printf("Magic:");

	for (ind = 0; ind < EI_NIDENT; ind++)
	{
		printf("%02x", e_ident[ind]);

		if (ind == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");

	}
}
/**
 * print_class - function to print c;ass of ELF
 * @e_ident: the pointer to ELF
 */
void print_class(unsigned char *e_ident)
{
	printf("Class: ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_data - function to print data of ELF header
 * @e_ident: the pointer to ELF file
 */
void print_data(unsigned char *e_ident)
{
	printf("data: ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);

	}
}
/**
 * print_version - function to print the version of file ELF
 * @e_ident: the pointer to the file
 */
void print_version(unsigned char *e_ident)
{
	printf("Version: %d", e_ident[EI_VERSION]);


	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("(current)\n");
			break;
		default:
			printf("\n");

	}
}
/**
 * print_osabi - function to print osabi
 * @e_ident: the pointer to ELF file
 */
void print_osabi(unsigned char *e_ident)
{
	printf("OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - system V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone\n");
			break;
		default:
			printf("<unknown: %x\n", e_ident[EI_OSABI]);
	}
}
/**
 * print_abi - orint the ABI version of ELF
 * @e_ident: a pointer to array of ELF header
 */
void print_abi(unsigned char *e_ident)
{
	printf("ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}
/**
 * print_type - function to print the type of header
 * @e_type: ELF type to be chaecked
 * @e_ident: The pointer to ELF file
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("Type: ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);

	}
}
/**
 * print_entry - Printing an entry point of ELF header
 * @e_entry: The address to Elf file
 * @e_ident: the pointer to the array of ELf file
 *
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("Entry point address:");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = ((e_entry << 16) | (e_entry >> 16));
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);

}
/**
 * close_elf - closing the ELF file
 * @elf: the ELF file to be close
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Erroe: Can't close fd %d\n", elf);
		exit(98);

	}
}
/**
 * main - the main function of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 as success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int a, b;

	a = open(argv[1], O_RDONLY);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(a);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	b = read(a, header, sizeof(Elf64_Ehdr));
	if (b == -1)
	{
		free(header);
		close_elf(a);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(a);
	return (0);
}
