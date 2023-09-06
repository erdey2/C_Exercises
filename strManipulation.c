#include <stdio.h>

int main() 
{
    /* cstr (copystr is needed because if we use the str instead it will go the end and it will not be used to get the original strings) */
    char *str, *cstr; 
    str = "      ALX School         #cisfun      ";
    cstr = str;
    int i, j, len = 0;
    for(i = 0; *cstr != '\0'; cstr++)
    {
        len++;
    }
    for (i = 0; i < len; i++)
    printf("%c", str[i]);
    printf(" has %d characters\n ", len);
    
    return 0;
}
