#ifndef HEAD_H
#define HEAD_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <sys/wait.h>

#define BUFFER_SIZE 256

void execute(char *input);
void prompt(void);
char *get_line(void);
char *strtok_fxn(char *command);
char *print(char *argv);

#endif
