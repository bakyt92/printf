#include "libftprintf.h"

int	ft_putnbr(int n)
{
	char	c;
	int		counter;

	counter = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
		counter++;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
	counter++;
	return (counter);
}

void ft_digit(tData *p)
{
	int digit;

	digit = va_arg(p->ap, int);
	p->s_printed += ft_putnbr(digit);
}