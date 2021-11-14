/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:18:13 by ufitzhug          #+#    #+#             */
/*   Updated: 2021/11/14 16:23:28 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"
# define DESYATOK "0123456789"

typedef struct t_Data {
	va_list	ap;
	int		s_printed;
}	t_Data;

int		ft_printf(const char *s, ...);
void	ft_process(char *f, t_Data *p);
void	ft_char(t_Data *p);
void	ft_str(t_Data *p);
void	ft_pointer(t_Data *p);
void	ft_putchar(char str, t_Data *p);
void	ft_digit(t_Data *p);
void	ft_unsigned_int(t_Data *p);
void	ft_hexadecimal_lower(t_Data *p);
void	ft_convert(unsigned long long int pointer, unsigned int base, t_Data
			*p, char *alphabet);
void	ft_hexadecimal_upper(t_Data *p);

#endif
