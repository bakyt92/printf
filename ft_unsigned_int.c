/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:47:38 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/11/14 14:47:57 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//int	ft_putnbr_unsigned(unsigned int n)
//{
//	char	c;
//	int		counter;
//
//	counter = 0;
//	if (n >= 10)
//		ft_putnbr(n / 10);
//	c = n % 10 + '0';
//	write (1, &c, 1);
//	counter++;
//	return (counter);
//}

void ft_unsigned_int(tData *p)
{
	unsigned int digit;

	digit = va_arg(p->ap, unsigned iant);
	ft_convert(digit, 10, p, DESYATOK);
}
