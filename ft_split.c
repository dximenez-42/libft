/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:59:00 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/26 14:22:13 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*allocate_word(const char *s, size_t end)
{
	char	*mem;
	size_t	i;

	mem = ft_calloc((end + 1), sizeof(char));
	if (mem == 0)
		return (0);
	i = 0;
	while (i < end)
	{
		mem[i] = s[i];
		++i;
	}
	mem[i] = '\0';
	return (mem);
}

char	**free_all(char	**mem, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free((void *)mem[i]);
		++i;
	}
	free(mem);
	return (0);
}

size_t	count_words(char const *s, char del)
{
	size_t	c;

	if (ft_strlen(s) == 0)
		return (0);
	c = 0;
	s = ft_strtrim(s, &del);
	while (*s != '\0')
	{
		if (*s == del)
			++c;
		++s;
	}
	return (c + 1);
}

size_t	word_size(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		++i;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**mem;
	size_t	size;
	size_t	i;

	s = ft_strtrim(s, &c);
	mem = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	// printf("allocated %zu words\n\n", count_words(s, c));	//
	if (mem == 0)
		return (0);
	i = 0;
	while (count_words(s, c) > 0 && *s != '\0')
	{
		// printf("remaining words: %zu\n", count_words(s, c));	//
		while (*s == c)
			++s;
		size = word_size(s, c);
		mem[i] = allocate_word(s, size);
		if (mem[i] == 0)
			return (free_all(mem, count_words(s, c) + i));
		// printf("-> '%s'\n", mem[i]);	//
		s += size + 1;
		++i;
	}
	return (mem);
}

// int	main(void)
// {
// 	char *str = "HOLA QUE TAL ESTAS";
// 	char sep = ' ';
// 	char **s = ft_split(str, sep);
// }

// int	main(void)
// {
// 	char *str = "0 0 0 0 0 0 0 0 0";
// 	char sep = ' ';
// 	char **s = ft_split(str, sep);
// }

// int	main(void)
// {
// 	char *str = "      split       this for   me  !       ";
// 	char sep = ' ';
// 	char **s = ft_split(str, sep);
// }

// int	main(void)
// {
// 	char *str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
// 	char sep = ' ';
// 	char **s = ft_split(str, sep);
// }

// int	main(void)
// {
// 	char *str = "hello!";
// 	char sep = ' ';
// 	char **s = ft_split(str, sep);
// }