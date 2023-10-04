#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main (void)
{
	char *filename;
	filename = "Process 1";
	if (creat(filename, 0664) > 0)
	{
		printf("%s is created %d is its id\n", filename, getpid());
	}

	return (0);
}
