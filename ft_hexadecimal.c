/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:47:13 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/11/14 16:28:09 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexadecimal_lower(t_Data *p)
{
	unsigned int	hex_low;

	hex_low = va_arg(p->ap, unsigned int);
	ft_convert(hex_low, 16, p, HEX_LOWER);
}

void	ft_hexadecimal_upper(t_Data *p)
{
	unsigned int	hex_upper;

	hex_upper = va_arg(p->ap, unsigned int);
	ft_convert(hex_upper, 16, p, HEX_UPPER);
}
