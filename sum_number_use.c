#include <stdio.h>
#include "myfunctions.h"
/**
 * How to use a function in multiple source files
 */
int main(void)
{
	int a, b, result;
	printf("Enter the value of a and b followed by enter");
	scanf("%d %d",&a, &b);

	result = add(&a, &b);
	printf("%d + %d = %d \n", a, b, result);
	
}
