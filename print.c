#include "head.h"

/**
 *print - function does the printf commands
 *@argv: - input passed to function
 *Return: - @argv
 */
char *print(char *argv)
{
	size_t count = strlen(argv);

	/*write(STDOUT_FILENO, text, strlen(text));*/
	write(1, argv, count);
	return (argv);
}
