/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:21:52 by tarini            #+#    #+#             */
/*   Updated: 2024/11/12 15:35:24 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t ft_strlen(const char *s);
void *ft_memchr(const void *s, int c, size_t n);
int ft_atoi(const char *nptr);
void ft_bzero(void *s, size_t n);
void *ft_memset(void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
char *ft_strchrnul(const char *s, int c);
char	*ft_strdup(const char *src);
void *ft_calloc(size_t elementCount, size_t elementSize);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int ft_memcmp(const void *s1, const void *s2, size_t n);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);

#endif
