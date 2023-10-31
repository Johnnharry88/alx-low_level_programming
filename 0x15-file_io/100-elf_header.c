#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void elfchecker(unsigned char *e_ident);
void wondprint(unsigned char *e_ident);
void classprint(unsigned char *e_ident);
void dataprint(unsigned char *e_ident);
void print_vers(unsigned char *e_ident);
void abiprint(unsigned char *e_ident);
void osxprint(unsigned char *e_ident);
void p_type(unsigned int e_type, unsigned char *e_ident);
void p_entry(unsigned long int e_entry, unsigned char *e_ident);
void exit_elf(int elf);

/**
 * elfchecker - function that chaeck out for an ELF file
 * @e_ident: pointer to an array holding the ELF magic numbers.
 * Return: void..
 */
void elfchecker(unsigned char *e_ident)
{
	int alx;

	for (alx = 0; alx < 4; alx++)
	{
		if (e_ident[alx] != 127 &&
		    e_ident[alx] != 'E' &&
		    e_ident[alx] != 'L' &&
		    e_ident[alx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * wondprint - displays the magic numbers of an ELF header.
 * @e_ident: pointer to an array holding the ELF magic numbers.
 * Return: void.
 */
void wondprint(unsigned char *e_ident)
{
	int alx;

	printf("  Magic:   ");

	for (alx = 0; alx < EI_NIDENT; alx++)
	{
		printf("%02x", e_ident[alx]);

		if (alx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * classprint - Displays the class of an ELF header.
 * @e_ident: A pointer to an array holding the ELF class.
 * Return: void.
 */
void classprint(unsigned char *e_ident)
{
	printf("  Class:                             ");

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
 * dataprint - Displayss the data of an ELF header.
 * @e_ident: pointer to an array holding the ELF class.
 * Return: void.
 */
void dataprint(unsigned char *e_ident)
{
	printf("  Data:                              ");

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
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_vers - Displays the version of an ELF header.
 * @e_ident: pointer to an array holding the ELF version.
 * Return: void.
 */
void print_vers(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * osxprint - Displays the OS/ABI of an ELF header.
 * @e_ident: pointer to an array holding the ELF version.
 * Return: void.
 */
void osxprint(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
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
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * abiprint - Displays  the ABI version of an ELF header.
 * @e_ident: pointer to an array holding the ELF ABI version.
 * Return: void.
 */
void abiprint(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * p_type - Displays the ELF header type.
 * @e_type: ELF type.
 * @e_ident: pointer to an array holding the ELF class.
 * Return: void.
 */
void p_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

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
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * p_entry - Displays the entry point of an ELF header.
 * @e_entry: Address of  ELF entry point.
 * @e_ident: pointer to an array holding the ELF class.
 */
void p_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * exit_elf - exits  ELF file.
 * @elf: descriptor of the ELF file.
 * Return: void.
 */
void exit_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the begining of an ELF file.
 * @argc: The number of arguments requied by program to run.
 * @argv: arguments vector.
 * Return: 0 on success or exit with code.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int x, r;

	x = open(argv[1], O_RDONLY);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		exit_elf(x);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(x, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		exit_elf(x);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elfchecker(header->e_ident);
	printf("ELF Header:\n");
	wondprint(header->e_ident);
	classprint(header->e_ident);
	dataprint(header->e_ident);
	print_vers(header->e_ident);
	osxprint(header->e_ident);
	abiprint(header->e_ident);
	p_type(header->e_type, header->e_ident);
	p_entry(header->e_entry, header->e_ident);

	free(header);
	exit_elf(x);
	return (0);

}
