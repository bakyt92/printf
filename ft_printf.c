#include "libftprintf.h"

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
		f++;
	}
	return (int);
}

