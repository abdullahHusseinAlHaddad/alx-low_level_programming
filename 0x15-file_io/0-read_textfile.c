#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *		to the POSIX standard output.
 * @filename: A pointer.
 * @letters: The number of letters.
 * Return: number.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byte;
	char *buffer[READ_BUF_SIZE * 8];
	int i;

	if (!filename || !letters)
		return (0);
	i = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	byte = read(i, &buffer[0], letters);
	byte = write(STDOUT_FILENO, &buffer[0], byte);
	close(i);
	return (byte);
}
