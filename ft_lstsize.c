/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:47:18 by dximenez          #+#    #+#             */
/*   Updated: 2024/01/26 14:24:33 by dximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	size_t	i;

	i = 0;
	current = lst;
	while (current != 0)
	{
		current = current->next;
		++i;
	}
	return (i);
}

/*
int main()
{
	t_list	element3;
	t_list	element2;
	t_list	element1;

	element3.content = "3";
	element3.next = 0;
	
	element2.content = "2";
	element2.next = &element3;
	
	element1.content = "1";
	element1.next = &element2;

	printf("%d\n", ft_lstsize(&element1));
}
*/