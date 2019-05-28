/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:31:24 by rhobbs            #+#    #+#             */
/*   Updated: 2019/05/28 15:41:52 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

void    ft_putchar(char c);
void    ft_putstr(char const *str);
void    ft_putendl(char const *s);
void    ft_putnbr(int x);
int 	ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_strcmp(const char *s1, const char *s2);
int 	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnew(size_t size);
int		ft_atoi(const char *str);
size_t  ft_strlen(const char *s);
size_t  ft_strnlen(const char *s, size_t maxlen);
char	*ft_strchr(const char *s, int c);
char    *ft_strstr(const char *haystack, const char *needle);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char    *ft_strcpy(char *dst, char *src);
char    *ft_strncpy(char *dst, const char *src, size_t len);
char    *ft_strcat(char *s1, const char *s2);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
void    *ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memccpy2(void *dst, const void *src, int c, size_t n);
void    *ft_memset(void *b, int c, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void    ft_strclr(char *s);
void    ft_bzero(void *s, size_t n);
void    *ft_memalloc(size_t size);
void    ft_memdel(void **ap);

#endif
