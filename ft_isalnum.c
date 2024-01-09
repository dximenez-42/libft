/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:44:55 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/09 13:55:46 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	char string[] = "0123456789ABCdefGHIjklMNOpqrSTUvwxYZ!@#$%^&*()_+{}[]";
	int i = 0;
	while (string[i] != '\0')
	{
		printf("%c > %d %d\n", string[i],
			isalnum(string[i]), ft_isalnum(string[i]));
		i++;
	}
}
*/