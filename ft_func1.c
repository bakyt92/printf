#include "libftprintf.h"

void ft_char(char *f, tData p)
{
	char c;

	c = va_arg(p.ap, int);
	write(1, &c, 1);
	p.s_printed++;
}

void ft_str(char *f, tData p)
{
	char *str;

	str = va_arg(p.ap, char *);
	while (str)
	{
		write(1, &str, 1);
		str++;
		p.s_printed++;
	}
}

void ft_pointer(char *f, tData p)
{
	unsigned long long int pointer;
	char *s1;

	pointer = va_arg(p.ap, unsigned long long int);
	write(1, '0', 1);
	write(1, 'x', 1);
	p.s_printed += 2;
	s1 = ft_convert_hex(pointer, p);
	ft_str(s1, p);
}

char *ft_convert_hex(unsigned long long int pointer, tData p)
{
	static char	*alphabet_hex;
	static char	buffer[50];
	char 		*ptr;

	alphabet_hex[16] = "0123456789abcdef";
	ptr = &buffer[49];
	*ptr = '\0';
	while (pointer != 0)
	{
		*ptr-- = alphabet_hex[pointer % 16];
		pointer /= 16;
	}
	return (ptr);
}