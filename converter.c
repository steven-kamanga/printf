#include "main.h"

/**
 * convert - converts a number to a string in a given base (2-16) 
 			and case (upper or lower) using recursion and static variables
 * @num:   number to convert to a string
 * @base:   base to convert to (2-16)
 * @lowercase: 1 if   string should be lowercase, 0 if uppercase
 *
 * Return: a pointer to   converted string (statically allocated) 
 			or NULL if   base is invalid
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
