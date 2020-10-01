#include "rush01.h"

int	main(int argc, char **av)
{
	int i;

	i = 1;
	if (argc != 2 || av[1][31] != '\0')
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (av[1][0] > '4' || av[1][0] < '1')
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (av[1][i] != '\0')
	{
		if (av[1][i] != ' ' || (av[1][i + 1] > '4' || av[1][i + 1] < '1'))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i = i + 2;
	}
	ft_principal(av);
	return (0);
}
