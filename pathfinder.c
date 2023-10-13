#include "shell.h" 

int pathfinder(char *argv[])
{
  
    char *delim  = ":", *my_path, *copy_path, *hyphen = "/", *null_char = "\0", *cmd;
    char *path_argv[1024];
    struct stat buffer;
    int i;
    size_t count;
    char *mypath;
    my_path = getenv("PATH");
    
    if (my_path)
    {
	   for(count = 0; my_path[count]; count++)
	   ;
	   copy_path = malloc(sizeof(char) * (count + 1));
	   string_copier(mypath, copy_path);
	   tokenzer(copy_path, path_argv, delim);
	   i = 0;
	   while (path_argv[i]!= NULL)
	    {
		    _strcat(path_argv[i], "/");
		    _strcat(path_argv[i], argv[0]);
		    _strcat(path_argv[i], "\0");
		    
		    if (stat(path_argv[i], &buffer) == 0)
		    {
			    argv[0] = path_argv[i];
			    free(copy_path);
			    return (0);
		    }
		    else
		    {
			    perror("error");
			    return (4);
		    }
		    i++;
	    }
    }
}

