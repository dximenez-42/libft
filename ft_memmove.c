// #include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned long n)
{
	unsigned long	i;
	char *t;

	i = 0;
	while (i < n)
	{
		t[i] = ((unsigned char*)src)[i];
		// ((unsigned char*)src)[i] = '\0';
		i++;
	}
	i = 0;
	while (t[i] != '\0')
	{
		((unsigned char*)dest)[i] = t[i];
		i++;
	}

	return (dest);
}

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