#include "shell.h"
int command_excute(char *loop_argv[])
{
if (execve(loop_argv[0], loop_argv, NULL) == -1)
{
perror("./shell");
return (3);
}
return (0);
}

