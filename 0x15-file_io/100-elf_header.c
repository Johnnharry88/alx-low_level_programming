#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

void elf_checker(unsigned char *e_ident);
void wond_print(unsigned char *e_ident);
void classicprint(unsigned char *e_ident);
void dataprint(unsigned char *e_ident);
void ver_print(unsigned char *e_ident);
void verabiprint(unsigned char *e_ident);
void osprint(unsigned char *e_ident);
void entprint(unsigned long int e_entry, unsigned char *e_ident);
void ty_print(unsigned int e_type, unsigned char *e_ident);
void elfxit(int a);

/**
 * elf_checker - program checks for ELF idnetity in a file
 * @e_ident: pointer to array hoding ELF numbers
 * Return: void.
 */
void elf_checker(unsigned char *e_ident)
{
	int xty = 0;

	while (xty <= 3)
	{
		if (e_ident[xty] != 127 && e_ident[xty] != 'E' &&
		e_ident[xty] != 'L' && e_ident[xty] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	xty = xty + 1;
	}
}

/**
 * wond_print - program utputs the magic no of ELF header
 * @e_ident: pointer to array holding ELF numbers
 * Rturn: void
 */
void wond_print(unsigned char *e_ident)
{
	int xty = 0;

	while (xty < EI_NIDENT)
	{
		printf("%02x", e_ident[xty]);
		if (xty == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	xty = xty + 1;
	}
}

/**
 * classicprint - a program that outputs the class of an ELF header file
 * @e_ident: pointer to array holding ELF
 */
void classicprint(unsigned char *e_ident)
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
		case ELFCLASSNONE:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * dataprint - program that print data of an ELF
 * @e_ident: pointer to an array holding ELF
 * Return: void.
 */
void dataprint(unsigned char *e_ident)
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
		case ELFDATANONE:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * ver_print - program that outputs the version of ELF file.
 * @e_ident: pointer to an array holding ELF.
 * Return: void.
 */
void ver_print(unsigned char *e_ident)
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
 * osprint - function that prints ELF
 * @e_ident: pointer to array holding ELF.
 * Return: void.
 */
void osprint(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
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
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * verabiprint - program that prints the version of ELF
 * @e_ident: pointer to array holding the ELF
 * Return:void.
 */
void verabiprint(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
				       e_ident[EI_ABIVERSION]);
}

/**
 * ty_print - program that prints the type of ELF header
 * @e_ident: pointer to an array contiaining ELiF
 * @e_type: ELF type.
 * Return: void.
 */
void ty_print(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("  Type:                              ");
	switch (e_type)
	{
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
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * entprint- program that outputs the entry point of an ELF file
 * @e_ident: A pointer to an array containing the ELF class.
 * @e_entry: Address of the ELF entry point.
 */
void entprint(unsigned long int e_entry, unsigned char *e_ident)
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
 * elfxit - program that closses all ELF file.
 * @a: the file describing ELF.
 * Return: void.
 */
void elfxit(int a)
{
	if (close(a) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n)", a);
		exit(98);
	}
}

/**
 * main - Outputs information held in ELF hader at
 * ELF stating point.
 * @argc: Number of arguments needed to run program
 * @argv: Array of pointer to arguments.
 * Return: 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[]et number)
{
	Elf64_Ehdr *hd;
	int v;
	int x;

	v = open(argv[1], O_RDONLY);
	if (v == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't read file %s\n", argv[1]);
		exit(98);
	}
	hd = malloc(sizeof(Elf64_Ehdr));
	if (hd == NULL)
	{
		elfxit(v);
		dprintf(STDERR_FILENO, "Error: Can't read filr %s\n", argv[1]);
		exit(98);
	}
	x = read(v, hd, sizeof(Elf64_Ehdr));
	if (x == -1)
	{
		free(hd);
		elfxit(v);
		dprintf(STDERR_FILENO, "Error: '%s': No such file\n", argv[1]);
		exit(98);
	}
elf_checker((*hd).e_ident);
printf("ELF Header;\n");
wond_print(hd->e_ident);
classicprint((*hd).e_ident);
dataprint(hd->e_ident);
ver_print(hd->e_ident);
osprint(hd->e_ident);
verabiprint(hd->e_ident);
ty_print(hd->e_type, hd->e_ident);
entprint(hd->e_entry, hd->e_ident);
free(hd);
elfxit(v);
return (0);
}
