#include <stdio.h>
int main(int argc, int *argv[])
{
int number1, number2, result;

printf("Enter The first number \n");
scanf("%d",&number1);

printf("Enter the second number \n");
scanf("%d",&number2);
  
result = number1 + number2;
printf("%d + %d = %d \n",number1, number2, result);
return 0;
}
