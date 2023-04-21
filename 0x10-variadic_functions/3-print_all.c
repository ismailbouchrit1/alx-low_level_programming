#include"variadic_functions.h"

/**
 * print_all - prints anything.
 *
 * @format: the format
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list ap;

	va start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c",sep,  va_arg(ap, char));
					break;
				case 'i':
					printf("%s%d",sep,  va_arg(ap, char));
                                        break;
				case 'f':
                                        printf("%s%f",sep,  va_arg(ap, char));
                                        break;
				case 's':
                                        str = va_arg(ap, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s",sep,  str);
                                        break;
				default
					i++;
					continue;
			}

			sep = ", ";
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
