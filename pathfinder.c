#include "shell.h" 
char * pathfinder(char *cmd)
{
  
    char *delim  = ":", *my_path,*copy_path;
  char *path_argv[1024];
    struct stat buffer;
    int i,count;
    my_path = getenv("PATH");
  
          
    
    if (my_path)
    {
      
      for(count = 0; my_path[count];count++)
              ;
       
        copy_path= malloc(count);
      
        string_copier(my_path,copy_path);
        tokenzer(copy_path, path_argv,delim);
        i=0;
        while (path_argv[i])
        {
 
            _strcat(path_argv[i],"/");
            _strcat(path_argv[i],cmd);

          if (stat(path_argv[i], &buffer) == 0)

            {
                 free(copy_path);
                   
            return(path_argv[i]);
           
           
            }

         i++;
            
           
            }
         

     }
     return (NULL);

}

