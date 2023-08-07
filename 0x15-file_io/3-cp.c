#include "main.h"

/**
 *main - entry point
 * @ac: argument count
 * @av: array of argument tokens
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int file_from, file_to;
	int i = 1024, a = 0;
	char buf[1024];

	if (ac != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	close(file_from), exit(99);
}
	while (i == 1024)
{
	i = read(file_from, buf, 1024);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	a = write(file_to, buf, i);
	if (a < i)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
}

	if (close(file_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	if (close(file_to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
