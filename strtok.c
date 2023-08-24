#include "head.h"
/**
*strtik_fxn -  splits a string and returns an array of each word of the string
*@command: input string
*
*Return: string
*/
char *strtok_fxn(char *command)
{
    char *str = command;
    char *delimiter = " ";
    char *token;

    token = strtok(str, delimiter);
    while (token)
    {
        printf("%s", token);
        token = strtok(NULL, delimiter);
    }
    return (str);
}
