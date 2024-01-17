/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:59:00 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/17 22:22:57 by dximenez         ###   ########.fr       */
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

	mem = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (mem == 0)
		return (0);
	index = 0;
	start = 0;
	count = 0;
	while (index <= ft_strlen(s))
	{
		if (s[index] == c || index == ft_strlen(s))
		{
			mem[count++] = allocate_word(s, start, index);
			start = index + 1;
		}
		++index;
	}
	return (mem);
}

/*
int	main(void)
{
	// printf("%zu\n", count_words("HOLA QUE TAL", ' '));
	printf("%s\n", ft_split("HOLA QUE TAL", ' ')[1]);
}
*/