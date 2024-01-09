/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:53:37 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/09 18:27:17 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(src);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size);
}

/*
int main()
{
	char *str1 = "hola";
	char str2[5];
	size_t num = ft_strlcpy(str2, str1, 4);
	printf("%zu %s\n", num, str2);
}
*/