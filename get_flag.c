#include "main.h"

/**
 * get_flag - gets   flag from   format string and sets   struct flag to 1
 * @s:   flag to check for validity and set in   struct if valid (if not valid,   struct is not modified)
 * @f:   struct to set   flag in if valid (if not valid,   struct is not modified) 
 *
 * Return: 1 if   flag is valid, 0 if not valid
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
