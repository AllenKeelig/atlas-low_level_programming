#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the provided format.
 * @format: Format string specifying the types of arguments
 * @...: Variable number of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	const char *str, *separator = "";

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
