#include "main.h"

/**
 *append_text_to_file- function
 *@filename: variable
 *@text_content: variable
 *Return: integrer
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	size_t size = 0;

	file = size;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[size] != '\0')
			size++;

		if (write(file, text_content, size) == -1)
			return (-1);
	}
	close(file);

	return (1);
}
