#include "main.h"

/**
 *create_file - function that creates a file.
 * @filename: variable pointer
 * @text_content: content file
 * Description: Create a function that creates a file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int a, file;

		if (filename == NULL)
		{
			return (-1);
		}
	file = open(filename, O_CREAT |  O_WRONLY | O_TRUNC, 0600);
	if (file < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	for (a = 0; text_content[a]; a++)
		;
		write(file, text_content, a);

	return (1);
}
