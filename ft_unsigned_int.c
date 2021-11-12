#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	char	c;
	int		counter;

	counter = 0;
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
	counter++;
	return (counter);
}

void ft_unsigned_int(tData *p)
{
	unsigned int digit;

	digit = va_arg(p->ap, unsigned int);
	p->s_printed += ft_putnbr_unsigned(digit);
}
