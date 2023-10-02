#include "main.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: the name of the file to read
 *@letters: the number of letters to read and print
 *Return: the actual number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nRead, nWrite;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	nRead = read(fd, buff, letters);
	if (nRead == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	nWrite = write(STDOUT_FILENO, buff, nRead);
	if (nWrite == -1 || nWrite != nRead)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (nWrite);
}
