#include <stdarg.h>
#include <stdio.h>
int my_printf(const char *format, ...)
{
    va_list arglist;
    int i, ret; 
    
    va_start(arglist, format);
    
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            switch (format[i + 1])
            {
                case 'd':
                ret = va_arg(arglist, int);
                printf("%d", ret);
                break;
                case 's':
                ret = va_arg(arglist, char *);
                printf("%s", ret);
                break;
                default:
                break;
            }
            i++;
        }
        else
        {
            printf("%c", format[i]);
        }
    }
    va_end(arglist);
    return ret;
}
int main (void)
{
    int a = 10;
    char *str = "Hello World!";
    my_printf("The number is %d. \n", a);
    my_printf("The string is %s. \n", str);
    
    return 0;
}
