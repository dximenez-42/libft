#include "libft.h"

void *ft_memset(void *s, int c, unsigned long n)
{
	unsigned long	index;
	index = 0;

	while (index < n)
	{
		((unsigned char*)s)[index] = (unsigned char)c;
		index++;
	}

	return (s);
}


#include <string.h>
#include <stdio.h>
int main()
{
	char *str = (char*)malloc(5 * sizeof(char));

	str = (char*)ft_memset(str, 33, 5);
	printf("%c\n", str[0]);
	printf("%c\n", str[1]);
	printf("%c\n", str[2]);
	printf("%c\n", str[3]);
	printf("%c\n", str[4]);
}