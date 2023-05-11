#include"main.h"

/**
 * read_textfile - Read text from file and print it to STDOUT.
 * @filename: pointer to the file name
 * @letters: size
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t r, w, o;

	if (filename == NULL)
		return (0);


	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buffer);
		return (0);
	}

	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(o);

	return (w);
}
