#include "head.h"

/**
*get_line - gets line
*
*Return: @buf
*/
char *get_line(void)
{
	char *buf;
	size_t n = 0;

	getline(&buf, &n, stdin);
	return (buf);
}
