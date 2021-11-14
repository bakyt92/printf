/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:46:52 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/11/14 14:46:55 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//int	ft_putnbr(int n)
//{
//	char	c;
//	int		counter;
//
//	counter = 0;
//	if (n == -2147483648)
//	{
//		write(1, "-2147483648", 11);
//		return (11);
//	}
//	if (n < 0)
//	{
//		write(1, "-", 1);
//		n = n * -1;
//		counter++;
//	}
//	if (n >= 10)
//		ft_putnbr(n / 10);
//	c = n % 10 + '0';
//	write (1, &c, 1);
//	counter++;
//	return (counter);
//}

void ft_digit(tData *p)
{
	int digit;

	digit = va_arg(p->ap, int);
	if (digit == -2147483648)
	{
		write(1, "-2147483648", 11);
		p->s_printed = p->s_printed + 11;
		return ;
	}
	if (digit < 0)
	{
		write(1, "-", 1);
		p->s_printed++;
		digit = digit * (-1);
	}
	ft_convert(digit, 10, p, DESYATOK);
//	p->s_printed += ft_putnbr(digit);
}
