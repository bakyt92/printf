#include "libftprintf.h"

void ft_hexadecimal_lower(char *f, tData p)
{
	unsigned int hex_low;
	char *s1;

	hex_low = va_arg(p.ap, unsigned int);
	s1 = ft_convert_hex(hex_low);
	ft_str(s1, p);
}

void ft_hexadecimal_upper(char *f, tData p)
{
	unsigned int hex_upper;
	char *s1;
	char *print_hex

	hex_upper = va_arg(p.ap, unsigned int);
	s1 = ft_convert_hex(hex_upper);
	while (s1)
	{
		if (*s1 >= 'a' && *s1 <= 'f')
		{
			*print_hex = *s1 - 32;
			print_hex++;
			s1++;
		}
		else
			*(print_hex++) = *(s1++);
	}
	ft_str(print_hex, p)
}