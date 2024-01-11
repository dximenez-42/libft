/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:39:14 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/11 17:35:36 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return (str);
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