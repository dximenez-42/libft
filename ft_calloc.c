#include <stdlib.h>

void	*ft_calloc(unsigned long n, unsigned long size)
{
	void			*mem;
	unsigned long	i;
	mem = malloc(n * size);
	i = 0;

	while (i < n)
	{
		((int*)mem)[i] = 0;
		i++;
	}

	return (mem);
}

#include <stdio.h>
int main()
{
	int *num = (int*)ft_calloc(5, sizeof(int));

	printf("%d\n", num[0]);
	printf("%d\n", num[1]);
	printf("%d\n", num[2]);
	printf("%d\n", num[3]);
	printf("%d\n", num[4]);
}