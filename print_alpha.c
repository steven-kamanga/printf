#include "main.h"

/**
 * print_string - loops through a string and prints every character
 * @l: va_list arguments from _printf
 * @f: pointer to struct flags that if a flag is passed to _printf
 * Description: Handles's' conversion specifier in _printf
 * Return:   number of printed
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a character
 * @l: va_list arguments from _printf
 * @f: pointer to struct flags that determines if a flag is passed to _printf
 * Description: Handle   character conversion specifier
 * Return: number of char printed
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
