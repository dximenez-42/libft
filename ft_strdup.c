/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:43:59 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/16 14:24:15 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*mem;
	size_t	i;

	mem = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (mem == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		mem[i] = s[i];
		++i;
	}
	mem[i] = '\0';
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