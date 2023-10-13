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
int compare_string(char *src, char *str);
int tokenzer(char *copy_str,  char *loop_argv[], char *delim);
int pathfinder(char *argv[]);
#endif
