#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
	char string[] = "0123456789ABCdefGHIjklMNOpqrSTUvwxYZ!@#$%^&*()_+{}[]ñáéíóúñàèìòù";
	int i = 0;
	while (string[i] != '\0')
	{
		printf("%c > %d %d\n", string[i], isascii(string[i]), ft_isascii(string[i]));
		i++;
	}
}