#include "main.h"

/**
* create_file- the used functions to create function
* @filename: the passed name of the file
* @text_content: the passed content of the file
* Return: success or fail
*/

int create_file(const char *filename, char *text_content)
{
	int fb;
	int t;
	int num;

	if (!filename)
	return (-1);

	fb = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fb == -1)
	return (-1);

	if (!text_content)
	text_content = "";

	for (num = 0; text_content[num]; num++)
		;
	t = write(fb, text_content, num);
	if (t == -1)
	return (-1);

	close(fb);
	return (1);
}
