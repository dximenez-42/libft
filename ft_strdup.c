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

#include <string.h>
#include <stdio.h>
int main()
{
	char *s = strdup("Hola");

	printf("%s\n", s);
}