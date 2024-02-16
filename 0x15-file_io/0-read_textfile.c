#include "main.h"

/**
* read_textfile-the fuction which makes a file discriptor to printig content
* @filename: the passed filename
* @letters: the passed number of letters
* Return: 0 or n
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fb;
	ssize_t lenr, lenw;
	char *buf;

	if (filename == NULL)
		return (0);
	fb = fopen(filename, O_RDONLY);
	if (fb == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		fclose(fb);
		return (0);
	}
	lenr = read(fb, buf, letters);
	fclose(fb);
	if (lenr == -1)
	{
		free(buf);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buf, lenr);
	free(buf);
	if (lenw != lenr)
		return (0);
	return (lenw);
}
