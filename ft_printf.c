#include "libftprintf.h"

void ft_putstr(char *str, tData *p)
{
	if(!str)
		return;
	while (str)
	{
		write(1, &str, 1);
		str++;
		p->s_printed++;
	}
	return;
}

void ft_process(char *f, tData *p)
{
	if(*f == 'c')
		ft_char(p);
	if(*f == 's')
		ft_str(p);
	if(*f == 'p')
		ft_pointer(p);
	if(*f == 'd' || *f == 'i')
		ft_digit(p);
	if(*f == 'u')
		ft_unsigned_int(p);
	if(*f == 'x')
		ft_hexadecimal_lower(p);
	if(*f == 'X')
		ft_hexadecimal_upper (p);
	if(*f == '%')
		ft_char(p);
	else
		ft_putstr(f, p);
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
			ft_process(f, &p);
		}
		else
		{
			ft_putstr(f, &p);
		}

	}
	va_end(p.ap);
	return (p.s_printed);
}
