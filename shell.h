#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

void prompt(void);
int command_excute(char *loop_argv[]);
int string_copier(char *str, char *copy);
int string_copier(char *str, char *cpy_of_str);
int compare_str(char *str, char *new);
char *_strcat(char *s1, const char *s2);
int pathfinder(char *argv[]);
int tokenzer(char *copy_str,  char *loop_argv[], char *delim);

extern char **environ;
void _setenv(char **evi);
void _unset(char **env);

void print_env_variable(void);
char _strlen(char *s);
char  *_strdup(char *s);
int shellgetline(char **str, size_t *n);
int command_check(char **argv);

#endif
