/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vazra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 17:37:26 by vazra             #+#    #+#             */
/*   Updated: 2020/09/17 12:18:25 by vazra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < (nb / i) && i < 46341)
		i++;
	if (nb == (i * i))
		return (i);
	return (0);
}
