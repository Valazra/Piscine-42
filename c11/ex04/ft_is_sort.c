/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vazra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:58:09 by vazra             #+#    #+#             */
/*   Updated: 2020/09/30 15:42:54 by vazra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int r;
	int r2;

	i = 1;
	while (i < length && !(r = f(tab[i - 1], tab[i])))
		i++;
	while (i < length)
	{
		r2 = f(tab[i - 1], tab[i]);
		if ((r < 0 && r2 > 0) || (r > 0 && r2 < 0))
			return (0);
		i++;
	}
	return (1);
}
