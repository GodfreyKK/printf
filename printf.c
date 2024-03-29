#include "main.h"
/**
 * _printf - print any and all things
 * @format: first argument
 * Return: bytes
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0, slen = 0;
	char *str;
	va_list pr;

	va_start(pr, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			pr_char(format[i]);
			count++;
		}
		else
		{
			switch (format[i + 1])
			{
				case 'c':
					pr_char(va_arg(pr, int));
					count++;
					break;
				case 's':
					str = va_arg(pr, char *);
					if (str != NULL)
					{
						slen = pr_str(str);
						count += slen;
					}
					break;
				case '%':
					pr_char('%');
					count++;
					break;
			}
			i++;
		}
		i++;
	}
	va_end(pr);
	return (count);
}
