#include "main.h"
/**
 * read_textfile - read a text file and print
 * it to the POXIS standard output
 *
 * @filename: name of the file to read
 * @letters: number of letters to read
 *
 * Return: number of chracters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	size_t count;
	size_t readlen;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	
	readlen = read(fd, buffer, letters);

	if ((int)readlen == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);

	count = write(1, buffer, readlen);

	if (count != readlen)
	{
        	return 0;
	}
	
	free(buffer);
	return count;
}
