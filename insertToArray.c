#include<stdio.h>
int main()
{
int size, array[100], counter, newValue, position;
printf("Enter  length of array");
scanf("%d", &size);

printf("Enter %d elements of array \n", size);
for(counter = 0; counter<size; counter++)
{
scanf("%d", &array[counter]); 
} 

printf("The array is \n");
for(counter = 0; counter<size; counter++)
{
printf("%d \n", array[counter]);
}

printf("Enter target position to insert");
scanf("%d", &position);
position--;

for(int j = size-1; j > position-1; j--)
{
array[j+1] = array[j];
}

printf("Enter the value to insert");
scanf("%d", &array[position]);

printf("Array after insertion of element");
for(counter = 0; counter<=size; counter++)
printf("%d \n", array[counter]);
return 0;
}
