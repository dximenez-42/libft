/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:43:55 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/09 13:53:33 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned long n)
{
	unsigned long	i;
	char			*t;

	i = 0;
	ft_memcpy(dest, src, n);
	ft_bzero((char *)src, n);
	return (dest);
}

/*
#include <unistd.h>
#include <stdio.h>
int main()
{
	char *src = "HOLA";
	char dest[50];

	ft_memmove(dest, src, 4);
	printf("%s\n", src);
	printf("%s\n", dest);
}
*/