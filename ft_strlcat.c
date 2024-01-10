/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:45:37 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/10 19:16:56 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	s;
	size_t	d;
	size_t	r;
	size_t	i;

	d = ft_strlen(dest);
	s = ft_strlen(src);
	i = 0;
	if (n > d)
		r = s + d;
	else
		r = s + n;
	while (src[i] && n > (d + 1))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (r);
}

/*
int main()
{
	char dest[25] = "pqrstuvwxyz";
	size_t num = ft_strlcat(dest, "abcd", 14);
	printf("%zu %s\n", num, dest);
}
*/