#include "ft_printf.h"
#include <stdio.h>

void ft_putchar(char str, tData *p)
{
//	printf("putchar:\n");
	write(1, &str, 1);
	p->s_printed++;
}

void ft_process(char *f, tData *p)
{
//	char c = va_arg(p->ap, int);
	if(*f == 'c')
		ft_char(p);
	else if(*f == 's')
		ft_str(p);
	else if(*f == 'p')
		ft_pointer(p);
	else if(*f == 'd' || *f == 'i')
		ft_digit(p);
	else if(*f == 'u')
		ft_unsigned_int(p);
	else if(*f == 'x')
		ft_hexadecimal_lower(p);
	else if(*f == 'X')
		ft_hexadecimal_upper (p);
	else if(*f == '%')
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
	while (*s)
	{
		if(*s == '%')
		{
			s++;
			ft_process((char *)s, &p);
			s++;
//			printf("s = %s", s);
		}
		else
		{
			ft_putchar(*(char *)s, &p);
//			write(1, s, 1);
			s++;
		}
	}
	va_end(p.ap);
	return (p.s_printed);
}

//int main(void)
//{
//	char *str = "%c";
//	ft_printf(str, 'V');
//}