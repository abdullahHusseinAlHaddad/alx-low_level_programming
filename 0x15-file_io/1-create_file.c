#include "main.h"
/**
 * _str - return length.
 * @tr: string.
 * Return: number.
 */
int _str(char *tr)
{
	int j = 0;

	if (!tr)
		return (0);
	while (*tr++)
		j++;
	return (j);
}

/**
 * create_file - Creates a file.
 * @filename: A pointer.
 * @text_content: A pointer.
 * Return: number.
 */
int create_file(const char *filename, char *text_content)
{
	int on;
	ssize_t byte = 0, ln = _str(text_content);

	if (!filename)
		return (-1);
	on = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_TRUSR | S_IWUSR);
	if (on == -1)
		return (-1);
	if (ln)
		byte = write(on, text_content, ln);
	close(on);
	return (byte == ln ? 1 : -1);
}
