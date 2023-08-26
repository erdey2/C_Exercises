#include <stdio.h>
int main(int argc, char *argv[])
{
int distance = 100;
float power = 2.345f;
double superPower = 56789.4532;
char initial = 'A';
char firstName [] = "Erdey";
char lastName[] = "Syoum";

printf("You are %d miles away. \n", distance);
printf("You have %f levelels of power. \n", power);
printf("You have %f awesome super powers. \n",superPower);
printf("I have an intial %c. \n", initial);
printf("I have a first name %s. \n", firstName);
printf("I have a last name %s. \n ", lastName);

printf("My whole name is %s %c. %s. \n", firstName, initial, lastName);

return 0;
} 
