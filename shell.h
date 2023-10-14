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
void prompt();
int command_excute(char *loop_argv[]);
int string_copier(char *str, char *copy);
int compare_str(char *src, char *str);
char *_strcat(char *s1, const char *s2);
int pathfinder(char *argv[]);
int tokenzer(char *copy_str,  char *loop_argv[], char *delim);
#endif
