#include <stdio.h>
#include <curses.h>
#define max 100
int main()
{
  int hexadecimalCode, remainder, i, hexadecimalCopy, digit[max];
  char ch;

  printf("Please Enter any Character \n");
  ch = getchar();
  
  hexadecimalCopy = ch;
  hexadecimalCode = ch;

  for( i = 0; hexadecimalCode > 0; i++)
    {
      remainder = hexadecimalCode % 2;
      digit[i] = remainder;
      hexadecimalCode = hexadecimalCode / 2;
    }
  
  printf("The computer know %c as: ", ch);
  i = i-1;
  for(;i >= 0; i--)
    {
      printf("%d ", digit[i]);
    }
  printf("\n");
  return 0;
}
