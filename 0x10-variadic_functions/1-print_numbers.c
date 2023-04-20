#include"variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: separator
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator)
			printf("%s", separator);
	}
	printf("%d", va_arg(ap, int));
	va_end(ap);
	printf("\n");
}
