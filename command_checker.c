#include "shell.h"

int command_check(char *argv[])
{
	ssize_t compared_result;
	char *my_exit = "exit", *my_env = "env", *_setenv = "setenv", *_unsetenv= "unsetenv";

	compared_result = compare_str(argv[0], my_exit);
	
	if (compared_result == 0)
		exit(0);
	compared_result = compare_str(argv[0], my_env);
	if (compared_result == 0)
	{
        printf("abebebe\n");
		print_env_variable();
		return (0);
	}
    compared_result = compare_str(argv[0], _setenv);
    if (compared_result == 0)
	{
	if (setenv(argv[1], argv[2], 1) != 0) 
         {
            perror("./shell");
            exit(1);
	    }
    }
  compared_result = compare_str(argv[0], _unsetenv);
   if (compared_result == 0)
	{
	if (unsetenv(argv[2]) != 0) 
        {
            perror("setenv");
              exit(1);

            }
}
  return (0);
}
