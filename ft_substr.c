/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:29:31 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/14 17:33:00 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mem;

	if (s == 0)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	mem = malloc((len + 1) * sizeof(char));
	if (mem == 0)
		return (0);
	ft_strlcpy(mem, s + start, len + 1);
	return (mem);
}
