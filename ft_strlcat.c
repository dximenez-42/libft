/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:45:37 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/10 17:39:02 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dest, const char *src, size_t n)
// {
// 	size_t	i;
// 	size_t	u;
// 	size_t	size;

// 	size = ft_strlen(dest);
// 	i = 0;
// 	u = size;
// 	if (n == 0)
// 		return (ft_strlen(dest));
// 	while ()
// 	{
// 		dest[u] = src[i];
// 		i++;
// 		u++;
// 	}
// 	dest[u] = '\0';
// 	return (u);
// }

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	s;
	size_t	d;

	s = 0;
	d = ft_strlen(dest);
	while (src[s] != '\0')
	{
		if (d < n - 1)
			dest[d] = src[s];
		s++;
		d++;
	}
	dest[d] = '\0';
	return (d);
}


int main()
{
	char dest[25] = "pqrstuvwxyz";
	size_t num = ft_strlcat(dest, "abcd", 14);
	printf("%zu %s\n", num, dest);
}



//  (5) abcde + xyz = abcde
//  (9) abcde + xyz = abcdexyz
//  (15) abcde + xyz = abcdexyz
//  (2) a + xyz = a
//  (3) a + xyz = ax