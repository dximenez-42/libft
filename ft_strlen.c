#include "libft.h"

unsigned long	ft_strlen(const char *s)
{
	unsigned long	i;
	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "Hola";

	printf("%lu\n", strlen(str));
	printf("%lu\n", ft_strlen(str));
}