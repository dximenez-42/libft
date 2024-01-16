/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:16:39 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/16 16:53:42 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_index(const char *s1, const char *set, int start)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (start && ft_strchr(set, s1[i]) == 0)
			break ;
		else if (!start && ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	if (start)
		return (i);
	else
		return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*mem;
	int		begin;
	int		end;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	begin = get_index(s1, set, 1);
	end = get_index(s1, set, 0);
	if (begin >= end)
		return (ft_strdup(""));
	mem = (char *)malloc(sizeof(char) * (end - begin + 1));
	if (mem == NULL)
		return (NULL);
	ft_strlcpy(mem, s1 + begin, end - begin + 1);
	return (mem);
}

/*
int main()
{
	printf("%s\n", ft_strtrim("abcdef", "ba"));
	// printf("%d\n", ft_set_contains_c("ber", 'a'));
}
*/