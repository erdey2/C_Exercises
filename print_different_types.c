#include <stdarg.h>
#include <stdio.h>

void display_multiple(const char *format, ...)
{
	va_list ap;

	int i = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == 'd')
			printf("%d ", va_arg(ap, int));
		 else if (*format == 'c')
			 printf("%c ", va_arg(ap, int));
		 else if (*format == 'f')
			 printf("%f ", va_arg(ap, double));
		++format;
		i++;
	}
	printf("\n");
	va_end(ap);
}
int main(void)
{
	display_multiple("dcff", 3, 'a', 1.999, 42.5);
}
