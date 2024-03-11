#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

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

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		handle_error(98, "Error: Can't read from file", fd_from, -1);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		handle_error(99, "Error: Can't write to file", fd_from, fd_to);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			handle_error(99, "Error: Can't write to file", fd_from, fd_to);
		}
	}

	if (bytes_read == -1)
	{
		handle_error(98, "Error: Can't read from file", fd_from, fd_to);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		handle_error(100, "Error: Can't close fd", fd_from, fd_to);
	}

	return 0;
}

