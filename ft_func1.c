#include "ft_printf.h"
#include <stdio.h>

void ft_char(tData *p)
{
	char c;

	c = va_arg(p->ap, int);
	write(1, &c, 1);
	p->s_printed++;
//	printf("ft_char\n");
}

void ft_str(tData *p)
{
	char *str;

	str = va_arg(p->ap, char *);
	if (*str)
		return ;
	while (*str)
		ft_putchar(*str, p);
}

void ft_pointer(tData *p)
{
	unsigned long long int pointer;
	char *s1;

	pointer = va_arg(p->ap, unsigned long long int);
	write(1, "0", 1);
	write(1, "x", 1);
	p->s_printed += 2;
	s1 = ft_convert_hex(pointer);
	ft_putchar(*s1, p);
}

char *ft_convert_hex(unsigned long long int pointer)
{
	static char	alphabet_hex[] = "0123456789abcdef";
	static char	buffer[50];
	char 		*ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	while (pointer != 0)
	{
		*ptr-- = alphabet_hex[pointer % 16];
		pointer /= 16;
	}
	return (ptr);
}