#include<stdio.h>

int sum(int *x, int *y)
{
return *x + *y;
}

int main()
{
int number1, number2, result;

printf("Enter the first no: \n");
scanf("%d", &number1);

printf("Enter the second no: \n");
scanf("%d", &number2);

result = sum(&number1, &number2);

printf("%d  + %d = %d \n", number1, number2, result);
}  




