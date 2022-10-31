#include "main.h"
#include <stdio.h>
/**
 * main - program that copies content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: (0) Always success
 */
int main(int argc, char *argv[])
{
	int fd, fd2, wr;
	ssize_t size = 1024;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while (size == 1024)
	{
		size = read(fd, buf, 1024);
		if (size == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		wr = write(fd2, buf, size);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100); }
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100); }
	return (0);
}
