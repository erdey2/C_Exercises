#include <stdio.h>

int main() {
    int i;
    int j;
    for (i = 0; i < 10; i++)
    {
        j = 0;
        while(j <= 9)
        {
            
            putchar(j);
            j++;
        }
        putchar('\n');
    }

    return 0;
}
