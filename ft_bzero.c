#include "libft.h"

void	ft_bzero(void *s, unsigned long n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((int*)n)[i] = 0;
		i++;
	}
}