/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:46:52 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/11/14 16:25:21 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_digit(t_Data *p)
{
	int	digit;

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
}
