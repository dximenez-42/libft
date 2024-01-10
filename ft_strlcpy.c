/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:53:37 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/10 15:57:24 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*
#include <string.h>
int main()
{
	char *str1 = "hola";
	int num = 5;

	char str2[5];
	char str3[5];

	size_t res1 = ft_strlcpy(str2, str1, num);
	size_t res2 = strlcpy(str3, str1, num);

	printf("m%zu %s\n", res1, str2);
	printf("n%zu %s\n", res2, str3);
	printf("diff %d\n", strcmp(str2, str3));
}
*/