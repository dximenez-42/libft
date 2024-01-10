/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:45:37 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/10 18:36:55 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	s;
	size_t	d;
	size_t	i;

	s = ft_strlen(src);
	d = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && n < (d + 1))
	{
		dest[d] = src[i];
		s++;
		d++;
	}
	dest[d] = '\0';
	if(n < d)
		return (s + d);
	else
		return (s + n);
}

/*
int main()
{
	char dest[25] = "pqrstuvwxyz";
	size_t num = ft_strlcat(dest, "abcd", 14);
	printf("%zu %s\n", num, dest);
}
*/