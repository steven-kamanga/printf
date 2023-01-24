#include "main.h"

/**
 *_convert - Converts a number and its specific base to String
 * @num: number
 * @base: base
 * @lowercase: lowercase all hexa values
 *Return : the length of a formatted output string
 *
*/
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
