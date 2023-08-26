#include<stdio.h>
int main()
{
int i, size,marks[100],  minimum, maximum;

printf("Enter how many marks you want \n");
scanf("%d", &size);

printf("Enter the %d marks for the array separated by space \n", size);

for(i = 0; i<size; i++)
{
scanf("%d", &marks[i]);
}
minimum = marks[0];
maximum = marks[0];

for(i = 0; i<size; i++)
{
if(marks[i] < minimum)
{
minimum = marks[i];
}

if(marks[i] > maximum)
{
maximum = marks[i];
}
}
printf("minimum mark is: %d \n", minimum);
printf("The maximum mark is: %d \n", maximum);
}

