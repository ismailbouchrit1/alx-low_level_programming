#include"variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: the separator
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *arg;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(ap, char *);
		if (!arg)
			arg = "(nil)";
		if (!separator)
			printf("%s", arg);
		else if (separator && i == 0)
			printf("%s", arg);
		else
			printf("%s%s", separator, arg);
	}
	va_end(ap);
	printf("\n");
}
