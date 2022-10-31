#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 0n success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		op = open(filename, O_CREAT, 0600);
		if (op == -1)
			return (-1);
		return (1);
	}

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, i);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
