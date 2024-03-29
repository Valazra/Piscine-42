/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vazra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:27:23 by vazra             #+#    #+#             */
/*   Updated: 2020/09/28 20:34:09 by vazra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	else if (ft_strlen(av[2]) == 1 && (av[2][0] == '+' || av[2][0] == '-'
				|| av[2][0] == '*' || av[2][0] == '/' || av[2][0] == '%'))
	{
		ft_do_op(av);
	}
	else
		ft_putstr("0\n");
	return (0);
}
