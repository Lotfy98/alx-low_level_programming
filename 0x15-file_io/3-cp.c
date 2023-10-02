#include "main.h"
#define BUFFER_SIZE 1024

/**
 *main - program
 *@ac: argument count
 *@av: argument vector
 *Return: 1 on success 0 on failure
 */
int main(int argc, char *argv[])
{
	int fileFrom, fileTo;
	char buff[BUFFER_SIZE];
	ssize_t bytesRead, bytesWritten;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileFrom = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileFrom < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileTo < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fileFrom);
		exit(99);
	}
	while ((bytesRead = read(fileFrom, buff, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(fileTo, buff, bytesRead);
		if (bytesWritten != bytesRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fileFrom);
			close(fileTo);
			exit(99);
		}
	}
	if (bytesRead < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fileTo) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileTo);
		exit(100);
	}
	return (0);
}
