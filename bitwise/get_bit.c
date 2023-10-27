#include <stdio.h>
int get_bit(unsigned long int n, unsigned int index)
{
    if (n & (1 << index))
    {
        return 1;
    }
    else
    {
        return (0);
    }
}
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
