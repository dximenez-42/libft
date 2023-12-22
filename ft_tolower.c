int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	else
		return (c);
}

#include <stdio.h>
int main()
{
	printf("%c\n", ft_tolower('E'));
}