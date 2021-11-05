#include "libftprintf.h"

static char *ft_process(char *f)
{
	char c;
	c = *f;

	if(c == 'c')
		write(1, &c, 1);
	if
}


int ft_printf(const char *s, ...)
{
	char *f;

	f = (char *)s;
	while (f)
	{
		if(*f == '%' && *(f+1) != '\0')
		{
			f++;
			ft_process(f);
		}
		else
			ft_putchar(*(f++));
	}
	return (int);
}

