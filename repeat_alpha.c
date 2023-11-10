#include <stdio.h>
#include <unistd.h>

int ft_c(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	else if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	else
		return (1);
}

int main(int ac, char **av)
{
	int i;
	int c;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			c = ft_c(av[1][i]);
			while (c--)
				write (1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}