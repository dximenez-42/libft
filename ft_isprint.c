int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
	char string[] = "0123456789ABCdefGHIjklMNOpqrSTUvwxYZ\t\v\r";
	int i = 0;
	while (string[i] != '\0')
	{
		printf("%c > %d %d\n", string[i], isprint(string[i]), ft_isprint(string[i]));
		i++;
	}
}