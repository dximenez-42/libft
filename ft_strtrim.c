/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:16:39 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/15 14:45:00 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strlen_custom(const char *s, const char *set)
{
	size_t	i;
	size_t	m;
	size_t	c;

	i = 0;
	m = 0;
	c = 0;
	while (s[i] != '\0')
	{
		while (set[m] != '\0')
		{
			if (s[i] != set[m])
				++c;
			++m;
		}
		m = 0;
		++i;
	}
	return (c);
}

static int	set_contains_c(char const *set, char const c)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		++set;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*mem;
	size_t	i;

	mem = malloc((strlen_custom(s1, set) + 1) * sizeof(char));
	if (!mem)
		return (0);
	i = 0;
	while (*s1 != '\0')
	{
		if (!set_contains_c(set, *s1))
		{
			mem[i] = *s1;
			++i;
		}
		++s1;
	}
	mem[i] = '\0';
	return (mem);
}

/*
int main()
{
	printf("%s\n", ft_strtrim("abcdef", "ba"));
	// printf("%d\n", ft_set_contains_c("ber", 'a'));
}
*/