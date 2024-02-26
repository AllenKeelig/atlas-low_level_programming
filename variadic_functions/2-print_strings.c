#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: String to be printed between strings (if not NULL)
 * @n: Number of strings passed to the function
 * @...: Variable number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        char *str = va_arg(args, char*);

        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);

        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }

    va_end(args);

    printf("\n");
}
