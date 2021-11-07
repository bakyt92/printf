#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct tData {
	va_list ap;
	int s_printed;
} tData;

va_list ap;
int ft_printf(const char *s, ...);
void ft_process(char *f, tData p);
void ft_char(char *f, tData p);
void ft_str(char *f, tData p);
void ft_pointer(char *f, tData p);


#endif
