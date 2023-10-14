#include "shell.h" 

int pathfinder(char *argv[])
{
  
    char *delim  = ":", *my_path,*copy_path;
    char *path_argv[1024];
    struct stat buffer;
    int i;
    my_path = getenv("PATH");
    /* strlen(my_path);*/
          
    
    if (my_path)
    {
      
      
       copy_path = strdup(my_path);
      
        /*string_copier(my_path,copy_path);*/
        tokenzer(copy_path, path_argv,delim);
        i=0;
        while (path_argv[i]!= NULL)
        {
 
            _strcat(path_argv[i],"/");
            _strcat(path_argv[i],argv[0]);
          /*_strcat(path_argv[i],"\0");*/
        
      
           printf("argv[i] %s\n",path_argv[i]);

          if (stat(path_argv[i], &buffer) == 0)

            {
                 free(copy_path);
                 argv[0] =path_argv[i];
            return(0);
           
           
            }
         
   i++;
     }

}
return (0);
}