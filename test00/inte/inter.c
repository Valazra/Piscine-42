#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check(char *str, char c, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if ((ft_check(s1, s1[i], i) == 1) && (s1[i] == s2[j]))
			{
				ft_putchar(s1[i]);
				break;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_inter(av[1], av[2]);
	}
	write(1, "\n", 1);
}
