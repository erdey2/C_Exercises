// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define FILE_NAME "example.dat"
int main() 
{
    // Write C code here
    FILE *fp;
    fp = fopen(FILE_NAME, "r");
    if (fp == NULL)
    {
        printf("Can't open %s\n", FILE_NAME);
        exit(EXIT_FAILURE);
    }
    else
    {
        printf("%s successfuly opened\n", FILE_NAME);
    }
    if (fclose(fp))
    {
        printf("%s successfuly Closed\n", FILE_NAME);
    }

    return 0;
}
