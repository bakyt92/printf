/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:47:26 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/11/14 16:27:42 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char str, t_Data *p)
{
	write(1, &str, 1);
	p->s_printed++;
}

void	ft_process(char *f, t_Data *p)
{
	if (*f == 'c')
		ft_char(p);
	else if (*f == 's')
		ft_str(p);
	else if (*f == 'p')
		ft_pointer(p);
	else if (*f == 'd' || *f == 'i')
		ft_digit(p);
	else if (*f == 'u')
		ft_unsigned_int(p);
	else if (*f == 'x')
		ft_hexadecimal_lower(p);
	else if (*f == 'X')
		ft_hexadecimal_upper (p);
	else
		ft_putchar(*f, p);
}

int	ft_printf(const char *s, ...)
{
	t_Data	p;

	p.s_printed = 0;
	va_start(p.ap, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			ft_process((char *)s, &p);
			s++;
		}
		else
		{
			ft_putchar(*(char *)s, &p);
			s++;
		}
	}
	va_end(p.ap);
	return (p.s_printed);
}
