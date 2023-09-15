#include <stdio.h>

int main() 
{
    int a = 97;
    short b = 97;
    long c = 97;
    long long d = 97;
    int unsigned short e = 97;

    int f = 047;
    long g = 0x9A;
    
    printf("int: %d size: %ld bytes\n", a, sizeof(int));
    printf("short: %hd size: %ld bytes\n", b, sizeof(short));
    printf("long: %ld size: %ld bytes\n", c, sizeof(long));
    printf("long long: %lld size: %ld bytes\n", d, sizeof(long long));

    printf("unsiged short: %hu size: %ld bytes\n", e, sizeof(short));

    printf("Octal int: %o size: %ld bytes\n", f, sizeof(f));
    printf("Hexadecimal long: %lx size: %ld bytes\n", g, sizeof(g));
    

    return 0;
}
