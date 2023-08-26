#include<stdio.h>
int main()
{
int age = 90;
int *p;
 p = &age;
int height = 72;

printf("%d \n",  &p);
printf("Your height is %d \n", height);
return 0;
} 
