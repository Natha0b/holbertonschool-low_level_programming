#include "main.h"

/**
 *read_textfile- function
 *@filenae: variable
 *@letters: variable
 *Return: variable
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;

	fd = open("filename", O_CREAT | O_WRONLY, 0600);

	if (filename == NULL)
		return (0);

	

	
}
