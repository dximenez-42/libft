/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:43:32 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/09 13:54:46 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned long n, unsigned long size)
{
	void			*mem;
	unsigned long	i;

	mem = malloc(n * size);
	ft_bzero(mem, n);
	return (mem);
}

/*
#include <stdio.h>
int main()
{
	int *num = (int*)ft_calloc(5, sizeof(int));

	printf("%d\n", num[0]);
	printf("%d\n", num[1]);
	printf("%d\n", num[2]);
	printf("%d\n", num[3]);
	printf("%d\n", num[4]);
}
*/