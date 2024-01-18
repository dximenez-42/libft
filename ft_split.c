/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:59:00 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/18 17:42:53 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*allocate_word(const char *s, size_t start, size_t end)
{
	char	*mem;
	size_t	i;

	mem = malloc((end - start + 1) * sizeof(char));
	if (mem == 0)
		return (0);
	i = 0;
	while (start < end)
	{
		mem[i] = s[start];
		++start;
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

char	**ft_split(char const *s, char c)
{
	char	**mem;
	size_t	index;
	size_t	count;
	size_t	start;
	int		flag;

	mem = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (mem == 0)
		return (0);
	index = 0;
	start = 0;
	count = 0;
	while (index <= ft_strlen(s))
	{
		if (s[index] != c && !flag)
		{
			start = index;
			flag = 1;
		}
		else if ((s[index] == c || index == ft_strlen(s)) && flag)
		{
			mem[count] = allocate_word(s, start, index);
			if (mem[count++] == 0)
				return (free_all(mem, count_words(s, c)));
			flag = 0;
		}
		++index;
	}
	return (mem);
}

/*
int	main(void)
{
	// char **s = ft_split("hello! ", ' ');
	// // printf("%zu\n", count_words("HOLA QUE TAL", ' '));
	// printf("{\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%s\"}\n", s[0], s[1], s[2], s[3], s[4], s[5]);
}
*/