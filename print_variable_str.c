#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function to print strings
 * @separator: String separator
 * @n: number of strings
 *
 * Return: Formatted string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    char *str;
    va_list ap; /* access pointer */

    va_start(ap, n);

    for (i = 0; i < n; i++)
    {
        str = va_arg(ap, char *);

        if (separator != NULL && i > 0)
        {
             printf("%s", separator);
        }

        if (str == NULL)
        {
             printf("(nil)");
        }
        else
        {
             printf("%s", str);
        }
    }

    va_end(ap);
    putchar(10);/* new line */
}

int main(void)
{
    print_strings(": ", 2, "Erdey", "Syoum");
    return (0);
}
