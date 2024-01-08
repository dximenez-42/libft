#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}

#include <stdio.h>
int main()
{
	printf("%c\n", ft_toupper('z'));
}