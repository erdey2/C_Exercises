#include <stdio.h>

int main() 
{
    int a = 97;
    short b = 97;
    long c = 97;
    long long d = 97;
    
    printf("int: %d size: %ld bytes\n", a, sizeof(int));
    printf("short: %hd size: %ld bytes\n", b, sizeof(short));
    printf("long: %ld size: %ld bytes\n", c, sizeof(long));
    printf("long long: %lld size: %ld bytes\n", d, sizeof(long long));

    return 0;
}
