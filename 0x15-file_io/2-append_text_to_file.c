#include "main.h"
/**
 *append_text_to_file - appends text at the end of a file
 *@filename: the name of the file
 *@text_content: the NULL terminated string to add at the end of the file
 *Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nWirte;
	size_t len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (tex_content == NULL)
		return (1);

	len = 0;
	while (text_content[len] != '\0')
		len++;
	nWrite = write(fd, text_content, len);
	if (nWrite == -1 || (size_t) nWirte != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
