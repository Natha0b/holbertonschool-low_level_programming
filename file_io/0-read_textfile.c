#include "main.h"

/**
 *read_textfile- function
 *@filenae: variable
 *@letters: variable
 *Return: variable
 */

ssize_t read_textfile(const char filename, size_t letters)
{
	char *buff;
	int fd, read_f, write_f;

	if (!filename)
		return (0);
		
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters + 1);
	if (!buff)
		return (0);

	read_f = read(fd, buff, letters);
	if (read_f == -1)
		return (0);

	buff[letters] = '\0';

	write_f = write(STDOUT_FILENO, buff, read_f);

	if (write_f == -1)
		return (0);

	free(buff);
	close(fd);
	return (write_f);
}
