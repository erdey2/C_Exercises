#include<stdio.h>
int main()
{
float principleAmount, numberOfYears, interestRate, interestAmount, totalAmount;

printf("Insert the principle amount \n");
scanf("%f", &principleAmount);

printf("Insert the rate of the interest (%%) \n");
scanf("%f", &interestRate);

printf("Insert the years \n");
scanf("%f", &numberOfYears);

interestAmount = (interestRate * principleAmount * numberOfYears) / 100;
totalAmount = interestAmount + principleAmount;

printf("The simple interest result is as follows: \n");
printf("simple interest rate for %f year is %f birr: \n ", numberOfYears, interestAmount);
printf("total amount: %f \n", totalAmount);

return 0;
}
  

