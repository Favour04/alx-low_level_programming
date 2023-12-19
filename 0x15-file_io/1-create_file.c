#include "main.h"
/**
 * create_file - create a new file
 *
 * @filename: name of the file to read
 * @letters: number of letters to read
 *
 * Return: number of chracters read
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t wrtlen;

	if (filename == NULL)
		return (-1);

	fd = open(filename,O_WRONLY | O_CREAT | O_TRUNC );
	
	if (fd == -1)
	{
		return (-1);
	}
	
	if (text_content != NULL)
	{
		wrtlen = write(fd, text_content, strlen(text_content));

		if ((int)wrtlen == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
