#include "libftprintf.h"

void ft_putstr(char *str)
{
	if(!str)
		return;
	while (str)
	{
		write(1, &str, 1);
		str++;
	}
	return;
}

void ft_process(char *f, tData p)
{
	if(*f == 'c')
		ft_char(f, p);
	if(*f == 's')
		ft_str(f, p);
	if(*f == 'p')
		ft_pointer(f, p);
	if(*f == 'd' || *f == 'i')
		ft_digit(f, p);
	if(*f == 'u')
		ft_unsigned_int(f, p);
	if(*f == 'x')
		ft_hecadecimal_lower(f, p);
	if(*f == 'X')
		ft_hecadecimal_upper(f, p);
	if(*f == '%')
		ft_char(f, p);
	else
	{
		ft_putstr(f);
		f++;
	}
}


int ft_printf(const char *s, ...)
{
	char *f;
	tData p;

	p.s_printed = 0;
	f = (char *)s;
	va_start(p.ap, s);
	while (f)
	{
		if(*f == '%' && *(f+1) != '\0')
		{
			f++;
			p.s_printed++;
			ft_process(f, p);
		}
		else
		{
			ft_char(*(f++));
			p.s_printed++;
		}

	}
	va_end(p.ap);
	return (p.s_printed);
}