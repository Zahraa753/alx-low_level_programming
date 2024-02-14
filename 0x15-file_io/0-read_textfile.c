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
	int len;
	int i;

	fb = fopen(*filename, "r");
	len = write(fb, filename, strlen(filename));

	if (fb == -1)
	return (0);
	if (filename == NULL)
	return (0);

	if(letters <= len)
	{
			write(fb, filename, letters);
			if (write == -1)
			return (0);
			return (letters);
	}
	else
		{
			write(fb, filename, strlen(filename));
			if (write == -1)
			return (0);
			return (strlen(filename));
		}
	fclose(fb);
}
