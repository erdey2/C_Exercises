#include <stdio.h>

int main() {
   int mark[] = {10, 20, 30, 40, 50};
   printf("The first mark: %d", mark[0] );

   //The efficient way of accessing elements
   //internally compilers works by first convert the above way to the below way
   printf(" \n The first mark: %d", *(mark + 0) );
   printf(" \n The 2nd mark: %d", *(mark + 1) );

   int *markPointer;
   markPointer = mark;

   printf("\n Address of markPonter %p \n", markPointer);
   printf("Address of mark[0] %p \n", &mark[0]);

    return 0;
}
