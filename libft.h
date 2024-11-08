#include <string.h>

#ifndef LIBFT_H
#define LIBFT_H

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	isascii(int c);
int	isprint(int c);
size_t strlen(const char *s);
void *memchr(const void *s, int c, size_t n);
int ft_atoi(const char *nptr)

#endif
