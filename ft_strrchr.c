/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:30:14 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/19 13:30:34 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int ch)
{
	char	*str;
	char	c;

	str = (char *)s;
	c = (char)ch;
	while (*str != '\0')
	{
		if (*str == c)
			return (str);
		++str;
	}
	if (c == '\0')
		return (str);
	return (0);
}

/*
#include <string.h>
int main()
{
	// printf("%s\n", strrchr("abcde", 'a'));
	// printf("%s\n", strrchr("abcde", 'd'));
	// printf("%s\n", strrchr("abcde", 'e'));
	// printf("%s\n", strrchr("abcde", '\0'));
	printf("%s\n", ft_strrchr("teste", 'e'));
	printf("%s\n\n", strrchr("teste", 'e'));

	printf("%d\n", memcmp(ft_strrchr("teste", 'e'), strrchr("teste", 'e'), 20));
}
*/