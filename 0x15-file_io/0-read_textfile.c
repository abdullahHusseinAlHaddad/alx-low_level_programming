#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byte;
	char buf[READ_BUF_SIZE * 8];
	int f;

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	byte = read(f, &buf[0], letters);
	byte = write(STDOUT_FILEND, &buf[0], byte);
	close(f);
	return (byte);
}
