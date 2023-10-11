#include "shell.h"
void prompt()
{
	char *prompt = "$ ";
       write(1,prompt,2);
}       
