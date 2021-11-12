#include "ft_printf.h"

void ft_putchar(char str, tData *p)
{
		write(1, &str, 1);
		p->s_printed++;
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
	{
		ft_putchar(*f, p);
	}
}


int ft_printf(const char *s, ...)
{
	tData p;

	p.s_printed = 0;
	va_start(p.ap, s);
	while (s)
	{
		if(*s == '%')
		{
			s++;
			ft_process((char *)s, &p);
			s++;
		}
		else
		{
			ft_putchar(*(char *)s, &p);
			s++;
		}
	}
	va_end(p.ap);
	return (p.s_printed);
}
