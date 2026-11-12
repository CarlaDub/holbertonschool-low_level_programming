#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Creates a file.
 * @filename: Name of the file to create.
 * @text_content: Text to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	close(fd);
	return (1);
}
