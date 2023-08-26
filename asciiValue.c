#include <stdio.h>
int main()
{
char inputChar;
int inputCode;

printf("What is the character you want to know its ascii code \n");
scanf("%c", &inputChar);

inputCode =  (int)inputChar;
printf("The ascii code of %c is %d \n", inputChar, inputCode);
return 0;
 
}
