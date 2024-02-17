#include "main.h"

/**
* append_text_to_file- the used function
* @filename: the passed name of file
* @text_content: the passed text
* Return: -1 or 1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fb;
	int bit;
	int writen;

	if (!filename)
	return (-1);
	fb = open(filename,O_WRONLY | O_APPEND);
	if (!fb)
	return (-1);
	if (text_content)
	{
	for (bit = 0; text_content[bit]; bit++)
		;
	writen = write(fb, text_content, bit);
	if (writen == -1)
	return (-1);
	}
	close(fb);
	return (1);
}
