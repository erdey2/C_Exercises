#include <stdio.h>
#define max 0
int main()
{
  int n, i, number[max];
  printf("Please enter how many numbers you want");
  scanf("%i", &n);

  int result = 0;
  for(i = 0; i<n; i++)
    {
      scanf("%d", &number[i]);
      result = result + number[i] * number[i];
    }
  printf("sum = %d \n", result);
  return 0;
}
  
