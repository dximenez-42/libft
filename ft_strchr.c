/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:39:14 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/16 16:01:15 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int ch)
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
	// printf("%s\n", strchr("abcde", 'a'));
	// printf("%s\n", strchr("abcde", 'd'));
	// printf("%s\n", strchr("abcde", 'e'));
	// printf("%s\n", strchr("abcde", '\0'));
	printf("%s\n", ft_strchr("teste", 'e'));
	printf("%s\n\n", strchr("teste", 'e'));

	printf("%d\n", memcmp(ft_strchr("teste", 'e'), strchr("teste", 'e'), 20));
}
*/