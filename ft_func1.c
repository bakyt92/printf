/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:46:42 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/11/14 14:46:46 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void ft_convert(unsigned long long int pointer, unsigned int base, tData *p,
				char *alphabet)
{
	char c;

	if (pointer >= base)
	{
		ft_convert(pointer / base, base, p, alphabet);
	}
	c = alphabet[pointer % base];
	write(1, &c, 1);
	p->s_printed++;
}

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
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar(*str, p);
		str++;
	}
}

void ft_pointer(tData *p)
{
	unsigned long long int pointer;

	pointer = va_arg(p->ap, unsigned long long int);
	write(1, "0", 1);
	write(1, "x", 1);
	p->s_printed += 2;
	ft_convert(pointer, 16, p, HEX_LOWER);
}

