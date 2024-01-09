/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:43:59 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/09 13:55:02 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*mem;
	unsigned long	i;

	mem = malloc(sizeof(s));
	i = 0;
	while (s[i] != '\0')
	{
		mem[i] = s[i];
		i++;
	}
	return (mem);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char *s = strdup("Hola");

	printf("%s\n", s);
}
*/