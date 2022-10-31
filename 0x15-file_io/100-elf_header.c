#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * closes_file - Closes a file.
 * @fil: ELF file.
 * Return: none.
 */

void closes_file(int fil)
{
if (close(fil) == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", fil);
exit(98);
}
}

/**
 * check_file - Checks if file is ELF.
 * @rem: Remaining file content.
 * Return: none.

