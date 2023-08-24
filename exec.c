#include "head.h"

/**
*execute - performs the fork operation
*@input: takes user input passed to function
*
*Return: 0
*/

void execute(char *input)
{
	pid_t child_pid;

	/*char input[BUFFER_SIZE];*/
	input[strcspn(input, "\n")] = '\0';
	if (strlen(input) == 0 || strspn(input, "\t\n") == strlen(input))
	{
		print("nothing was entered\n");
		exit(EXIT_SUCCESS);
	}

	if (strcmp(input, "exit") == 0)
	{
		print("exit\n");
		exit(EXIT_SUCCESS);
	}

	child_pid = fork();

	if (child_pid < 0)
	{
		fprintf(stderr, "fork failed");
	}
	else if (child_pid == 0)
	{
		execlp(input, input, NULL);
		print("No such file or directory");
		exit(EXIT_FAILURE);
	}
	els
	{
		int status;

		waitpid(child_pid, &status, 0);
	}
}
