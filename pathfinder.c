#include "shell.h" 
int pathfinder(char *argv[])
{
    //   printf("%s \n",argv[0]);
    char *delim  = ":", *my_path,*copy_path, *hyphen = "/", *null_char = "\0", *cmd;
    char *path_argv[1024];
    struct stat buffer;
    int i;
    my_path = getenv("PATH");7
    
    if (my_path)
    {
    //    path_length= length_finder(my_path);
    
        // mypath = malloc(sizeof(char)*path_length);
        // string_copier(mypath,copy_path);
        copy_path = strdup(my_path);
      size_t y = tokenzer(copy_path, path_argv,delim);
        i=0;
        while (path_argv[i]!= NULL)
        {
            strcat(path_argv[i],"/");
            strcat(path_argv[i],argv[0]);
            // strcat(path_argv[i],"\0");
            // append_str(path_argv[i],hyphen)
            // append_str(path_argv[i],cmd)
            // printf("%s \n",path_argv[i]);
  
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
            // perror("./shell");
        //    free(copy_path);
           }
//   i++;
    }
}
// }
