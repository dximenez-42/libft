#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

int	ft_isalpha(unsigned char c);
int	ft_isdigit(unsigned char c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
unsigned long	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, unsigned long n);
void	ft_bzero(void *s, unsigned long n)
void	*ft_memcpy(void *dest, const void *src, unsigned long n)
//memmove
//strlcpy
//strlcat
int	ft_toupper(int c);
int	ft_tolower(int c);
//strchr
//strncmp
//memchr
//memcmp
//strnstr
//atoi
// void	*ft_calloc(unsigned long n, unsigned long size);
// char	*ft_strdup(const char *s);
// char	*ft_substr(char const *s, unsigned int start, size_t len);
// char	*ft_strjoin(char const *s1, char const *s2);
// char	*ft_strtrim(char const *s1, char const *set);
// char	**ft_split(char const *s, char c);
// char	*ft_itoa(int n);
// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// void	ft_striteri(char *s, void (*f)(unsigned int, char*));
// void	ft_putchar_fd(char c, int fd);
// void	ft_putstr_fd(char *s, int fd);
// void	ft_putendl_fd(char *s, int fd);
// void	ft_putnbr_fd(int n, int fd);

#endif