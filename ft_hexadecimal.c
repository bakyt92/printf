#include "ft_printf.h"

void ft_hexadecimal_lower(tData *p)
{
	unsigned int hex_low;

	hex_low = va_arg(p->ap, unsigned int);
	ft_convert(hex_low, 16, p);
}

void ft_hexadecimal_upper(tData *p)
{
	unsigned int hex_upper;

	hex_upper = va_arg(p->ap, unsigned int);
	ft_convert(hex_upper, 16, p);
}