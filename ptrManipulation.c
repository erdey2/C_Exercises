#include <stdio.h>
int main()
{
int u = 80;
u++;

printf("Value of u %d: \n", u);
printf("Value of  u %d \n", *(&u));
printf("Address of u %p \n ", &u);

int *ptr2;
ptr2 = &u;
printf("Value of ptr2 %p \n", ptr2);
printf("The value of a variable points by ptr2 %d \n", *ptr2);

int *ptr3;
ptr3 =  ptr2;
ptr3++;
printf("After the pointer is added by one memory unit %p \n", ptr3);

char firstLetter = 'E';
char *ptr4;
ptr4 = &firstLetter;

char *ptr5;
ptr5 = ptr4;
ptr5++;

printf("Address of first letter %p: \n", &firstLetter);
printf("Address of ptr4 %p: \n", ptr4);
printf("After  ptr5 is added by one %p : \n", ptr5); 

return 0;
}

