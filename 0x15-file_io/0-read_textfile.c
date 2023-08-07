#include "main.h"
/*
 * main -function that reads text file and prints to the POSIX standard output
 *
 * return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *letter;
	ssize_t file, b, c;

	if (filename == NULL)
	{
		return (0);
	}

	letter = malloc(letters);
	if (letter == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	b = read(file, letter, letters);
	if (b == -1)
	{
		free(letter);
		return (0);
	}
	c = write(STDOUT_FILENO, letter, b);
	if (c < 0)
	{
		return (0);
	}
	close(file);

	return (c);
}
