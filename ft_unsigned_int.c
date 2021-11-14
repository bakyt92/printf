/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:47:38 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/11/14 16:24:19 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_int(t_Data *p)
{
	unsigned int	digit;

	digit = va_arg(p->ap, unsigned iant);
	ft_convert(digit, 10, p, DESYATOK);
}
