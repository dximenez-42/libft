#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned long n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i++;
	}

	return (dest);
}