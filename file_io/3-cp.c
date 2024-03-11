#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <libgen.h>


#define BUFFER_SIZE 1024

void handle_error(int code, const char *message, int fd1, int fd2)
{
	if (fd1 != -1)
	{
		close(fd1);
	}
	if (fd2 != -1)
	{
		close(fd2);
	}

	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}
int openFile(const char *filename, int flags)
{
	int fd = open(filename, flags);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(98);
	}
	return (fd);
}

void copyFile(int fd_from, int fd_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
}

void closeFile(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

int main(int argc, char *argv[])
{
	int fd_from = openFile(argv[1], O_RDONLY);
	int fd_to = openFile(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copyFile(fd_from, fd_to);

	closeFile(fd_from);
	closeFile(fd_to);

	return (0);
}
