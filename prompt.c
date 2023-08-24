#include "head.h"

/*
*prompt - the loop that displays $
*
*Return: 0
*/
void prompt(void)
{
    char input[BUFFER_SIZE];
    char *command;

    while (true)
    {
        print("$ ");
        command = get_line();
        strcpy(input, command);
        strtok_fxn(command);

        execute(command);
        free(command);
    } 
}
