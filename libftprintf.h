#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct tData {
	va_list ap;
	int s_printed;
} tData;

int		ft_printf(const char *s, ...);
void	ft_process(char *f, tData p);
void	ft_char(tData p);
void	ft_str(tData p);
void	ft_pointer(tData p);
void	ft_putstr(char *str, tData p);
void	ft_digit(tData p);
int		ft_putnbr(int n);
int		ft_putnbr_unsigned(unsigned int n);
void 	ft_unsigned_int(tData p);
void 	ft_hexadecimal_lower(tData p);
char 	*ft_convert_hex(unsigned long long int pointer);
void 	ft_hexadecimal_upper(tData p);

#endif
