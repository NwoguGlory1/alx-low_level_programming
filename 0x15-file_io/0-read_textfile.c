#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read and print from
 * @letters: number of letters it should read and print
 * Return: n, the actual number of bytes read and printed
 * 0 if the file can not be opened or read
 * 0 filename is NULL
 * 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *name;
	ssize_t fd;
	ssize_t n;
	ssize_t x;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	name = malloc(sizeof(char) * letters);
	x = read(fd, name, letters);
	n = write(STDOUT_FILENO, name, x);
	free(name);
	close(fd);
	return (n);

}
