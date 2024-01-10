/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:39:14 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/10 19:04:07 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char *str;

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
int main()
{
	printf("%s\n", strchr("abcde", 'a'));
	printf("%s\n", strchr("abcde", 'd'));
	printf("%s\n", strchr("abcde", 'e'));
	printf("%s\n", strchr("abcde", '\0'));
}
*/