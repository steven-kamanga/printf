#include "main.h"

/**
 * get_flag - function to turn on a flag when _printf finds a flag specifier
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 * Description: function checks the input character against the possible flag specifiers and sets the corresponding flag in the struct
 * Return: 1 if flag is set, 0 otherwise
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
