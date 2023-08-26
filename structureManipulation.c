#include<stdio.h>
#include<stdlib.h>
struct  person
{
char fName[50];
char lName[50];
int age;
char position[50];
long salary;
}
identifier;

int main()
{
printf("What is your first name \n");
scanf("%s", identifier.fName);

printf("What is your last name \n");
scanf("%s", identifier.lName);

printf("What is your age");
scanf("%d", &identifier.age);

printf("What is your Job Position");
scanf("%s", identifier.position);

printf("What is your salary");
scanf("%ld", &identifier.salary);
 
printf("First Name: %s \t Last Name:  %s\t Age:%d \t Job Position: %s \t Salary: %ld \n", identifier.fName, identifier.lName, identifier.age, identifier.position, identifier.salary);

}
