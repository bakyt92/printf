#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
#define HEX_LOWER "0123456789abcdef"
#define HEX_UPPER "0123456789ABCDEF"
#define DESYATOK "0123456789"

typedef struct tData {
	va_list ap;
	int s_printed;
} tData;

int		ft_printf(const char *s, ...);
void	ft_process(char *f, tData *p);
void	ft_char(tData *p);
void	ft_str(tData *p);
void	ft_pointer(tData *p);
void	ft_putchar(char str, tData *p);
void	ft_digit(tData *p);
//int		ft_putnbr(int n);
//int		ft_putnbr_unsigned(unsigned int n);
void 	ft_unsigned_int(tData *p);
void 	ft_hexadecimal_lower(tData *p);
void	ft_convert(unsigned long long int pointer, unsigned int base, tData
*p, char *alphabet);
void 	ft_hexadecimal_upper(tData *p);

#endif
