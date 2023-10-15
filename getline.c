#include "shell.h"
int shellgetline(char **str,size_t *n)
{
    ssize_t num_of_read;
   

num_of_read = getline (str, n, stdin);
	if (num_of_read == -1)
	{
		if (feof(stdin))
		{

			exit(0);
		}
        else
        {

            perror("./shell");
            return(1);
 
        }
	
	}
 
    return (num_of_read);

}
