#include <stdarg.h>
#include <stdio.h>

int va_sum(const int num_args, ...) /* sum the arguments */
{
	va_list ap; /* access pointer */

	int i, sum = 0;

	va_start(ap, num_args); /* startup */
	for (i = 0; i < num_args; i++)
		sum += va_arg(ap, int); /* get next argument */
	va_end(ap);
	return sum;
}
int main(void)
{
	printf("1st call sum: %d \n", va_sum(5, 1, 7, 8, 6, 21));
	printf("2nd call sum: %d \n", va_sum(3, 20, 70, 116));

	return 0;
	       
}
