#include <stdio.h>
int *reverse(int*, int);
int main() 
{
    int a[] = {10, 17, 16, 200, 50, 70, 68, 19, 27, 39};
    int *p, size;
    p = &a[0];
    size = sizeof(a) / sizeof(a[0]);
    printf("size: %d elements\n", size);
    
    int count;
    printf("Before Swap the elements are:");
    for (count = 0; count < size; count++)
    {
       printf("%d ", *(p + count)); 
    }
    reverse(p, size);
    
    printf("\nAfter  Swap the elements are:");
    for (count = 0; count < size; count++)
    {
       printf("%d ", *(p + count)); 
    }
    printf("\n");
    
    return 0;
}
int *reverse(int *p, int size)
{
    int temp, *first, *last;
    first = p;
    last = &p[size - 1];
    
    while (first < last)
    {
        temp = *first;
        *first = *last;
        *last = temp;
        
        first++;
        last--;
    }
    return p;
}
