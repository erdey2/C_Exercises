#include<stdio.h>
int main()
{
int i, size;

printf("Enter how many marks you want \n");
scanf("%d", &size);
int marks[size];

printf("Enter the %d marks for the array separated by space \n", size);

for(i = 0; i<size; i++)
{
scanf("%d", &marks[i]);
}

printf("The elements of the array are: ");
for(i = 0; i<size; i++)
{
printf("%d \n", marks[i]);
}
}

