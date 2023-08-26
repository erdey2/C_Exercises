#include <stdio.h>

int main() {
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int b[] = {10, 20, 30};
    int *p = &a[1];
    int *q = &a[5];
    printf("%d \n", *(p + 3));
    printf("%d \n", *(q - 3));
    printf("%d", q - p);
    if (p < q)
    printf("\n True");
    
    if (*p > *q)
    printf("\n False");
    return 0;
}
