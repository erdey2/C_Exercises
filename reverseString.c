#include<stdio.h>
int main()
{
char input[100];
char reverse[100];
int size;
printf("Enter a string");
scanf("%s", input);

printf("Enter the size");
scanf("%d", &size);

for(int i = size; i>0; i--)
{
 reverse[i] = input[i];
}
printf("You Entered %s \n", input);

printf("In reverse: %s \n", reverse);
for(int i = size; i>0; i--)
printf(reverse[i]);
return 0;
}
